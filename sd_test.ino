// M5StickC/Plus/Plus2用「SD HAT」のサンプルプログラム
// @rin_ofumi 2023.12.20
//
// 確認した機種
// - M5StickC
// - M5StickC Plus
// - M5StickC Plus2
//
// 開発環境
// - ArduinoIDE @^2.2.1
//
// ボードマネージャバージョン
// - M5Stack @^2.0.9
//
// 使用ライブラリバージョン
// - M5Unified @^0.1.11

#include <SD.h>
#include <M5Unified.h>

SPIClass SPI_EXT;

void setup() {
  M5.begin();

  //SDロゴの向きに画面回転（逆は”3”）
  M5.Lcd.setRotation(1);

  //SDカード用SPIポート初期化（SCK:HAT_G0, MISO:HAT_G36, MOSI:HAT_G26, SS:物理ピン無し"-1"）
  SPI_EXT.begin(0, 36, 26, -1);

  //SDカード初期設定
  if (!SD.begin(-1, SPI_EXT, 15000000)) {
    M5.Lcd.println("SD Card Mount Failed!");
    return;
  }

  //SDカード種別取得
  uint8_t cardType = SD.cardType();
  if (cardType == CARD_NONE) {
    M5.Lcd.println("None SD Card!");
    return;
  } else if (cardType == CARD_MMC) {
    M5.Lcd.println("SD Card Type: MMC");
  } else if (cardType == CARD_SD) {
    M5.Lcd.println("SD Card Type: SDSC");
  } else if (cardType == CARD_SDHC) {
    M5.Lcd.println("SD Card Type: SDHC");
  } else {
    M5.Lcd.println("SD Card Type: UNKNOWN");
  }

  //SDカード容量取得
  uint64_t cardSize = SD.cardSize() / (1024 * 1024);
  M5.Lcd.printf("SD Card Size: %lluMB\n", cardSize);
  M5.Lcd.println();

  //SDカードのルートディレクトリを開く
  File dir = SD.open("/");

  //SDカード内のディレクトリ・ファイル名を表示
  while (1) {
    File entry =  dir.openNextFile();
    if (!entry) {
      break;
    }
    M5.Lcd.println(entry.name());
    entry.close();
  }
}

void loop() {
}

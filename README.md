# tf(sd)_hat
Arduino project / SD HAT / for M5StickC/Plus/Plus2

<br>

# <概要>

M5StickC/Plus/Plus2用「TF(SD) HAT」のサンプルプログラムです。（「TF(SD) HAT」は[BOOTH](https://kitto-yakudatsu.booth.pm/items/2385035)と[スイッチサイエンス](https://www.switch-science.com/catalog/9551)で販売中）<br>

M5StickC/Plus/Plus2用「TF(SD) HAT」は、下記の様な形でM5StickC/Plus/Plus2に装着して使用します。
（HATオプションならではの収まりの良い最小形状を目指してデザインしました！）

![TF_HAT_1](https://kitto-yakudatsu.com/wp/wp-content/uploads/2024/03/P1440366.jpg)

<br>

TF（micro SD）カードスロットは裏面側にあります。

![TF_HAT_2](https://kitto-yakudatsu.com/wp/wp-content/uploads/2024/03/P1440373.jpg)

![TF_HAT_3](https://kitto-yakudatsu.com/wp/wp-content/uploads/2024/03/P1440374.jpg)

<br>

おまけとして、開閉式の小物入れがあります。予備のmicro SDカード等を収めるのに丁度良いサイズです。

![TF_HAT_4](https://kitto-yakudatsu.com/wp/wp-content/uploads/2024/03/P1440376.jpg)

<br>

# <信号割り当て>

M5StickCのHAT端子へSPIポートを割り当てて使用します。　信号割り当ては下表を参照下さい。

![TF_HAT_5](https://kitto-yakudatsu.com/wp/wp-content/uploads/2024/03/SD_HAT_sch.png)

<br>

# <サンプルプログラムの簡単な説明>

## 「sd_test.ino」
TF(SD)カードの種類・容量・ファイル一覧を表示するArduinoスケッチです。<br>
M5StickC/Plus/Plus2で使用出来ます。※Arduino IDEのボードマネージャーで各モデルを指定して下さい。

<br>

# <アップデート履歴>

## 【2023.12.20】

* M5Unified使用に変更、M5StickC Plus2の動作確認。

<br>

## 【2020.9.19】

* 最初のリリース。


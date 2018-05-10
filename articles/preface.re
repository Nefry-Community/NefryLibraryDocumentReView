= はじめに

この本では、NefryLibraryについて紹介していきます。

随時GitHubで更新されるため、表記にゆれやミスがある可能性がありますがご容赦ください。

 * ドキュメント管理レポジトリ（@<href>{https://github.com/Nefry-Community/NefryLibraryDocument}）
 * PDF生成レポジトリ（@<href>{https://github.com/Nefry-Community/NefryLibraryDocumentReView}）

せっかくなのでNefryライブラリを詳しく知っていきましょう！

== オススメ資料

Nefryコミュニティ（@<href>{https://www.facebook.com/groups/nefry}）で募集し、有志で作成した本があります。

Nefryのチュートリアルができる本とNefryでどんなことができるのか分かる本を作成しました!

 * きょうからのNefry（チュートリアル本）（@<href>{https://wamisnet.booth.pm/items/821882}）
 * ステップアップNefry（事例本）（@<href>{https://wamisnet.booth.pm/items/821884}）

== 動作確認環境について

筆者で動作確認した環境は次のリストになります。（2018/4/1現在）

 * Windows 10 Home & macOS Sierra 10.12.6（MacBook Air（13-inch, Mid 2013））
 * Arduino IDE 1.8.5
 * NefryLibrary 1.2.1

== わからないときは

Nefryユーザのコミュニティサイトです。
本書でわからないことがあれば、こちらに投稿していただくと反応があると思います。

 * Facebookコミュニティ（@<href>{https://www.facebook.com/groups/nefry}）

===[column] Nefry BTのリビジョンによる違いについて

Nefry BTには3つのリビジョンが存在します。（2018年4月現在）

 * Nefry BT（無印/R1）
 * Nefry BT R2
 * Nefry BT R3

Nefry BT（無印/R1）以降の変更点を説明します。

@<strong>{■ Nefry BT R2}

 * USBの両端についたスイッチを押しやすくなるようにスペースを取りました。
 * アンテナ部分を保護するために基板長を伸ばしました。
 * USB電源を保護するためにICを追加しました。
 * ピンの配置を修正しました。
 ** ディスプレイの制御ピンを変更しました。
 ** 基板の印字でアナログ入力ができないピンがあった件に対応しました。

@<strong>{■ Nefry BT R3}

 * Groveのアナログ入力を追加しました。
 * 書き込み時のエラーが起こりにくいように修正しました。
 * GroveのA0ポートの配線が間違っていた件を修正しました。

===[/column]

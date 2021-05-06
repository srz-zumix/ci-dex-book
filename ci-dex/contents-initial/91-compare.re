#@# -*- coding: utf-8 -*-
= Re:VIEWとの差分

//abstract{
Starterにおける機能追加や修正の一覧です。
//}


== まとめ記事

こちらの記事も参照してください。

 * 『技術系同人誌を書く人の味方「Re:VIEW Starter」の紹介』(Qitta)@<br>{}
   @<href>{https://qiita.com/kauplan/items/d01e6e39a05be0b908a1}
 * 『Re:VIEW Starterの新機能（2019年夏）』(Qiita)@<br>{}
   @<href>{https://qiita.com/kauplan/items/dd8dd0f4a6e0eb539a98}
 * 『Re:VIEW Starterの新機能（2019年冬）』(Qitta)@<br>{}
   @<href>{https://qiita.com/kauplan/items/e36edd7900498e231aaf}


== プロジェクト作成

 * Starterでは、WebサイトにおいてGUIでプロジェクトの作成と初期設定ができます。
   このおかげで、初心者でもつまづかずにプロジェクトを始められます。
   @<par>{i}
   Re:VIEWではプロジェクトの作成はコマンドラインでしか行えず、また初期設定を自分で行う必要があるので、初心者にはかなりハードルが高いです。
 * Starterでは、ダウンロードしたプロジェクトに文章のサンプルが含まれています。
   そのおかげで、どのように原稿を書けばいいのかが分かります。
   @<par>{i}
   Re:VIEWでは、作成したプロジェクトの中身はほとんど空であり、サンプルとしては役に立ちません。


== コメント

 * Starterでは、範囲コメントが使えます。
   @<par>{i}
   Re:VIEWでは、行コメントしか使えません。
 * Starterでは、行コメントは単に読み飛ばされます。
   @<par>{i}
   Re:VIEWでは、行コメントが空行扱いになるため、行コメントを使うと意図せず段落が区切られます。
   これは明らかにRe:VIEWの仕様バグですが、Re:VIEW開発チームはこのバグを認めていません。


== 箇条書き

 * Starterでは、順序つきリスト（HTMLでいうところの「@<code>{<ol>}」）の項目に、「1.」や「(a)」や「(A-1)」など任意の文字列が使えます。
   @<par>{i}
   Re:VIEWでは「1.」しか使えません。
 * Starterでは、順序つきリストを入れ子にできます。
   @<par>{i}
   Re:VIEWではできません。
 * Starterでは、順序つきリストと順序なしリストを相互に入れ子にできます。
   @<par>{i}
   Re:VIEWではできません。
 * Re:VIEWでは、箇条書きの項目が複数行のテキストだと、自動的に1行に連結されます。
   そのせいで、本来なら「@<code>|aaa|」と「@<code>|bbb|」と「@<code>|ccc|」の3行に分かれていた単語が、「@<code>|aaabbbccc|」のように勝手に連結されてしまいます。
   @<par>{i}
   Starterではこのようなおかしなバグは起こりません。


== 定義リスト

 * Re:VIEWでは、定義リストの説明文が複数行だと、自動的に1行に連結されます。
   そのせいで、本来なら「@<code>|aaa|」と「@<code>|bbb|」と「@<code>|ccc|」の3行に分かれていた単語が、「@<code>|aaabbbccc|」のように勝手に連結されてしまいます。
   @<par>{i}
   Starterではこのようなおかしなバグは起こりません。
 * Starterでは、定義リストの説明文に箇条書きが書けます。
   @<par>{i}
   Re:VIEWでは書けません。
 * Starterでは、定義リストとよく似た「説明リスト」が用意されています。
   説明リストは入れ子のブロック命令で書くので、説明文の中にたとえばプログラムコードを入れられます。
   またブロック命令にオプション引数を指定すると、太字にする・しないや、コンパクトモードにする・しないが選べます。


== 見出し（章、節、項、目）

 * Starterでは、章や節のタイトルを見栄えのいいデザインにしています。
   また設定ファイルを変更することで、デザインを選択できます。
   @<par>{i}
   Re:VIEWでは@<LaTeX>{}のデフォルトのデザインを使っているだけです。
 * Starterでは、章(Chapter)ごとにタイトルページを作成できます。
   これは商業誌では一般的なスタイルです。
#@#   @<par>{i}
#@#   Re:VIEWではこのような機能は用意されていません。
 * Starterでは、節(Section)ごとに改ページできます。
   これは初心者向け入門書ではよく見かけるレイアウトです。
#@#   @<par>{i}
#@#   Re:VIEWではこのような機能は用意されていません。
 * Starterでは、章や節を参照するとページ番号もつきます。
   これは特に、項(Subsection)に番号をつけない設定において、項を参照するときに有用です。


== インライン命令

 * Starterでは、たとえば「@<code>|@@<nop>{}<code>{foo@@<nop>{}<b>{bar}}|」のようにインライン命令を入れ子にできます。
   @<par>{i}
   Re:VIEWではできません。
 * Starterでは、「@<code>|@@<nop>{}<strong>{}|」が太字かつゴシック体になります。
   なぜなら日本語の文章では、強調は太字にするだけでなくゴシック体にすることが望ましいからです。
   @<par>{i}
   Re:VIEWでは、「@<code>|@@<nop>{}<strong>{}|」は太字になるだけです。
 * Starterでは、「@<code>|@@<nop>{}<strong>{}|」の省略形として「@<code>|@@<nop>{}<B>{}|」を用意しています。
   これにより、文章の強調が簡単にできます。
   @<par>{i}
   Re:VIEWには、「@<code>|@@<nop>{}<B>{}|」はありません。
 * Starterでは、何もしない命令「@<code>|@@<nop>{}<nop>{}|」があります。
   これを使うと、たとえば「@<code>|@@<nop>{}@@<nop>{}<nop>{}<B>{}|」とすれば「@<code>|@@<nop>{}<B>{}|」と表示されます。
   これはRe:VIEWを使ってRe:VIEWのマニュアルを作るときに重宝します。
   @<par>{i}
   Re:VIEWにはこのようなコマンドはありません。
 * Re:VIEWでは、たとえば「@<code>|@@<nop>{}<code>{a: b? c! d. e}|」と入力すると、「@<code>|{a:  b?  c!  d.  e}|」のように半角空白が2つ分出力されます。このような意図しない出力になるのは、@<LaTeX>{}におけるスペーシングの仕様をそのまま引き継いでいるからです。
   @<br>{}
   Starterではこの現象を回避しており、等幅フォントでも半角空白が2つ分出力されないように修正しています。
 * Starterでは、ファイル名を表すインライン命令「@<code>|@@<nop>{}<file>{}|」が用意されています。
 * Starterでは、文字サイズを変更するインライン命令「@<code>|@@<nop>{}<small>{}|」「@<code>|@@<nop>{}<xsmall>{}|」「@<code>|@@<nop>{}<xxsmall>{}|」「@<code>|@@<nop>{}<large>{}|」「@<code>|@@<nop>{}<xlargel>{}|」「@<code>|@@<nop>{}<xxlarge>{}|」が用意されています。
 * Starterでは、「@<LaTeX>{}」を表示する「@<code>|@@<nop>{}<LaTeX>{}|」、「@<TeX>{}」を表示する「@<code>|@@<nop>{}<TeX>{}|」、「@<hearts>{}」を表示する「@<code>|@@<nop>{}<hearts>{}|」が用意されています。
 * Starterでは、リンクのURLを自動的に脚注に表示する機能があります。
   これは、紙の本ではリンクのURLが表示されない問題に対する解決策です。
#@#   @<par>{i}
#@#   Re:VIEWにはこのような機能はありません。
#@# * Starterでは、長すぎるURLは途中で自動的に改行されます。


== ブロック命令

 * Starterでは、ブロック命令を入れ子にできます。
   たとえば「@<code>|//note{ ... //}|」の中に「@<code>|//list{ .. //}|」や「@<code>|//quote{ ... //}|」を入れられます。
#@#   @<par>{i}
#@#   Re:VIEWではこれができません。
 * Starterでは、章の概要を表す「@<code>|//abstract|」が用意されています。
   @<par>{i}
   Re:VIEWにはありませんが、かわりにリード文を表す「@<code>|//lead|」が使えます。
 * Starterでは、縦方向の空きを入れる「@<code>|//vspace|」が用意されています。
   マイナスの値を指定すれば、余分な空きを削除できます。
 * Starterでは、縦方向のスペースを確保する「@<code>|//needvspace|」が用意されています。
   @<par>{i}
   たとえばプログラムのキャプションだけが現在のページ、プログラムコードは次のページに表示されてしまったとします。
   このとき「@<code>|//list|」の前に「@<code>|//needvspace[6zw]|」と書くと、全角6文字分の高さのスペースがなければ自動的に改ページされます（つまりプログラムのキャプションの@<bou>{前}で改ページされる）。
   結果として、プログラムのキャプションとコードが同じページに表示されます。


== プログラムコード

 * Starterでは、「1」と「l」、「0」と「O」の見分けがつきやすいフォントを選んでいます。
   @<par>{i}
   Re:VIEWでは@<LaTeX>{}のデフォルトを使っているので、これらの見分けがつきにくいです。
 * プログラムコードを表示するとき、Starterでは1つのブロック命令「@<code>|//list|」だけで済みます。
   @<par>{i}
   Re:VIEWでは「@<code>|//list|」「@<code>|//emlist|」「@<code>|//listnum|」「@<code>|//emlistnum|」の4つを使い分ける必要があります。
 * Starterでは、長すぎる行を自動的に右端で折り返します。
   また折り返したことが分かるような記号をつけてくれます。
   @<par>{i}
   Re:VIEWにはこのような気の利いた機能がありません。
 * Starterでは、「@<code>|@@<nop>{}<del>{}|」で取り消し線を引いた行でも右端で折り返しされます。
   Starterではこのような細かいところに配慮が行き届いています。
 * Starterでは、行番号は目立たないようにグレーで表示します。
   @<par>{i}
   Re:VIEWにはこのような気の利いた機能がありません。
 * Starterでは、行番号を欄外に表示できます。
   これにより、行番号の分だけコードの表示範囲が狭まってしまうのを防げます。
#@#   @<par>{i}
#@#   Re:VIEWにはこのような気の利いた機能がありません。
 * Starterでは、飛び飛びの行番号を指定できます。
   @<par>{i}
   Re:VIEWでは連続した行番号しか表示できません。
 * Starterでは、インデントを可視化できます。
   この機能は、Pythonのようなインデントで入れ子を表現するプログラミング言語では重要です。
#@#   @<par>{i}
#@#   Re:VIEWではこれができません。
 * Starterでは、ラベルさえ指定されていればキャプションがなくても番号つきで表示されます。
   @<par>{i}
   Re:VIEWでは、「@<code>|//list[fib1]|」のようにラベルを指定していても、キャプションがなければ番号がつきません。
   ラベルの目的を考えれば、これはRe:VIEWの仕様バグです。
 * Starterでは、「@<code>|//list[?]|」のようにすると簡単に番号付きで表示されます。
   @<par>{i}
   Re:VIEWにはこの機能がないので、番号つきで表示するには重複しないラベルを指定する必要があり、数が多いとかなり面倒です。
 * Starterでは、プログラムコードのフォントサイズを変更できます。
   「あるプログラムコードだけフォントサイズを小さくする」といったことが簡単にできます。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、コード中の注釈を表す「@<code>|@@<nop>{}<balloon>{}|」がグレー表示されます。
   これは注釈がコードより目立たないようにという配慮です。
   @<par>{i}
   Re:VIEWにはこのような配慮はありません。
 * プログラム中にタブ文字がある場合、Re:VIEWでは空白文字に展開されます。
   しかしこれが「@<LaTeX>{}コードに変換してからタブ文字を展開する」という仕様のため、表示が崩れます。
   @<par>{i}
   Starterではタブ文字を展開してから@<LaTeX>{}コードに変換する」ため、表示が崩れません（ただし限界はあります）。
 * Starterでは、全角文字の幅を半角文字2つ分に揃えて表示する機能があります。
   全角と半角が混在しているせいで表示が揃わない（崩れてしまう）場合に使うと大変便利です。
 * Starterでは、プログラムコードとは別に出力結果を表示するための「@<code>|//output|」があります。
   プログラムコードと出力結果では見た目を変えて表示したい場合に便利です。
 * Re:VIEWでは、プログラムコードをハイライト表示する機能があります。
   @<par>{i}
   Starterではまだ未サポートです。


== ターミナル画面

 * Starterでは、ターミナル画面を表すコマンド命令「@<code>|//terminal|」を用意しています。
   これは使い方が「@<code>|//list|」と同じなので、覚えやすいです。
   @<par>{i}
   Re:VIEWで用意しているブロック命令「@<code>|//cmd|」は、「@<code>|//list|」と使い方が違っているので覚えにくいです。
 * Starterの「@<code>|//terminal|」はほぼ「@<code>|//list|」と同じなので、折返しや行番号など「@<code>|//list|」と同じ機能が「@<code>|//terminal|」でも使えます。
   @<par>{i}
   Re:VIEWの「@<code>|//cmd|」はそうではないので、機能が貧弱です。
 * Starterでは、ユーザ入力を表すインライン命令「@<code>|@@<nop>{}<userinput>{}|」があります。
   これを使うと、ユーザ入力部分に薄い下線が引かれます。
   ただし@<LaTeX>{}の制限により、長い行が右端で折り返しされません。
#@#   @<par>{i}
#@#   Re:VIEWにはありません。
 * Starterでは、カーソルを表すインライン命令「@<code>|@@<nop>{}<cursor>{}|」が用意されています。
   Vimの操作画面を説明するときに便利です。


== ノート、ミニブロック

 * Starterでは、ノートを表すブロック命令「@<code>|//note|」を上書きし、見栄えのいい表示にしています。
   @<par>{i}
   Re:VIEWではノートの見栄えは気にされていません。
 * Starterでは、ノートの中に箇条書きや他のブロック命令を入れられます。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、ノートの中で脚注が使えます。
 * Starterでは、ノートの中に書いたプログラムコードやターミナル画面が、ページまたぎできます。
 * Starterでは、ノートにラベルをつけてあとから参照できます。
   これはちょうど、図や表を参照するのと同じような機能です。
#@#   @<par>{i}
#@#   Re:VIEWにはこのような機能はありません。
 * Starterでは、補足情報を表す「@<code>|//info|」と注意喚起を表す「@<code>|//caution|」と警告を表す「@<code>|//warning|」にアイコンがつきます。


== 図

 * Re:VIEWでは、たとえば「@<code>|//image[][][scale=0.5]|」のようなオプションを指定すると、画像が本文幅の半分の大きさで表示されます。
   しかしこれは画像の幅が本文幅より大きい場合だけであり、画像の幅が本文幅より小さい場合は画像幅の半分の大きさで表示されます。
   そのため、画像の幅が本文幅より大きいかどうかを気にする必要があり、面倒です。
   @<par>{i}
   Starterでは「@<code>|//image[][][width=50%]|」のように指定すると、画像の幅が本文幅より大きいかどうかに関係なく、常に本文幅の半分の大きさで画像が表示されます。
 * Starterでは「@<code>|//image[][][width=40mm]|」のように、画像の表示幅を絶対値で指定できます。
   つまり画像の表示幅を本文の幅とは関係なく指定できます。
 * 画像の幅が本文幅より小さい場合、表示幅を指定せずに画像を表示すると、Re:VIEWではPDFならそのままの大きさで表示されるのに、HTMLでは本文幅いっぱいの大きさで表示されてしまいます。
   @<par>{i}
   Starterでは、PDFとHTMLのどちらでもそのままの大きさで画像が表示されます。
 * Starterでは、画像の挿入位置を指定できます（現在位置、ページ上部、ページ下部、別ページ）。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、図のまわりをグレーの線で囲む機能があります。
   画像のふちが白い場合はこの機能を使うと、画像の境界を明示できます。
#@#   @<par>{i}
#@#   Re:VIEWにはこのような機能はありません。
 * 画像が次のページに送られたとき、Starterでは後続のテキストを現在位置に流し込まれます。
   @<par>{i}
   Re:VIEWでは後続のテキストが現在位置に流し込まれないので、現在位置に大きなスペースが空きます。
 * Starterでは、「@<code>|//sideimage|」を使うと画像の横にテキストを表示できます。
   @<par>{i}
#@#   Re:VIEWにはこの機能はありません。


== 表

 * Starterでは、表の挿入位置を指定できます（現在位置、ページ上部、ページ下部、別ページ）。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、表のデータをCSV形式で指定できます。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、表のデータを外部ファイルから読み込めます。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、行ごとの罫線をオン・オフできます。
   また行ごとの罫線をオフにしたうえで、指定箇所だけ罫線を引くよう指定できます。
#@#   @<par>{i}
#@#   Re:VIEWではできません。
 * Starterでは、「@<code>|//table[label][]|」のようにラベルだけ指定してキャプションがない場合でも、「表1.1」のような番号がつきます。
   @<par>{i}
   Re:VIEWでは、ラベルが指定されてあってもキャプションがなければ番号が表示されません。
 * Starterでは、「@<code>|//table[?][]|」のように指定すると内部でラベルを自動的に割り当ててくれます。
   そのおかげで、表を番号つきで表示するのが簡単です。
   @<par>{i}
   Re:VIEWではこのような機能がないので、番号つきで表示するには重複しないラベルを必ず指定する必要があり、面倒です。
 * 表のカラムの右寄せや左寄せを指定する「@<code>{//tsize}」を、Starterでは「@<code>{//tsize[latex][|lcr|]}」のように指定できます。
   @<par>{i}
   Re:VIEWでは「@<code>{//tsize[|latex||lcr|]}」のように指定するため、読みづらいし分かりにくいです。
 * Re:VIEWには、項目の区切り文字を変更できる機能があります。
   @<par>{i}
   Starterでは未サポートです。


== 会話形式

 * Starterでは、アイコン画像つきの会話形式を用意しています。
 * Starterでは、アイコン画像なしの会話形式も用意しています。
 * Starterでは、大量の会話形式を入力するときに便利なように、短縮名を登録して短く書ける機能を用意しています。


== 表紙、大扉、奥付

 * Starterでは、表紙と裏表紙はPDFファイルで指定します。
   @<par>{i}
   Re:VIEWでは、表紙は画像ファイル（PNGやJPG）で指定します。
 * 本のタイトルが長い場合、Starterではタイトルを複数行で指定すれば、改行位置を指定できます。
   このおかげで、大扉では長いタイトルがきれいに改行されて表示されます。
   @<par>{i}
   Re:VIEWではこのような機能はありません。
 * Starterでは、大扉の裏に免責事項などが書かれています。
   これは商業誌では一般的ですが、同人誌では入れ忘れることがほとんどなので、あらかじめStarterが用意しています。
#@#   @<par>{i}
#@#   Re:VIEWではこのような配慮はありません。
 * Starterでは、奥付が必ず偶数ページ（見開きで左側のページ）になるよう調整します。
   @<par>{i}
   Re:VIEWではこのような機能はありません@<fn>{9h11e}。

//footnote[9h11e][TechBoosterのテンプレートでは、Starterと同じように奥付が偶数ページになります。]


== PDFファイル

 * Starterでは、印刷用PDFでは白黒に、電子用PDFではカラーにしてくれます。
   @<par>{i}
   Re:VIEWではこのような機能はありません。
 * Starterでは、印刷用PDFでは左右の余白幅を切り替えています。
   これは本文幅を広げるための工夫であり、商業誌でも一般的です。
   @<par>{i}
   Re:VIEWではこのような工夫はされていません。
 * Re:VIEWでは、印刷用PDFにはハイパーリンクがつかないようになっています。
   これは入稿時のトラブルをできるだけ減らすための仕様です。
   @<par>{i}
   しかし@<LaTeX>{}ではハイパーリンクのある・なしで組版結果が変わることがあります（hyperref.styの仕様）。
   また最近の印刷所では、ハイパーリンクがついたPDFでも入稿でトラブルになることはなさそうです。
   そこでStarterでは、印刷用PDFでもハイパーリンクを残したままにしています。
 * Re:VIEWでは、デフォルトでPDFにトンボがつきます。
   しかしこれは入稿に慣れてないとトラブルのもとです。
   入稿先が同人誌向けの印刷会社なら、トンボなしのほうが入稿トラブルは少ないです。
   @<par>{i}
   そのため、Starterではトンボはつけません。
 * Re:VIEWとStarterのどちらとも、印刷用PDFには隠しノンブル（通し番号）がつきます。
   ただし実装方法はRe:VIEWとStarterとで全く別です。
   またStarterでは、ノンブルの位置や大きさや色や開始番号を設定ファイルで変更できます。
 * 印刷用PDFに自動でノンブルがつくのは、PDFの作成がRe:VIEWだけで完結している場合は便利ですが、たとえば大扉を別ソフトで作るような場合は逆に不便です。
   @<par>{i}
   そこでStarterでは、PDFを生成したあとに隠しノンブルをつけるRakeタスク「@<code>|rake pdf:nombre|」も用意しています。
   これだと、大扉だけを別ソフトで作るような場合にも対応できます。
 * Starterでは、PDFファイルにノンブルをつける@<href>{https://kauplan.org/pdfoperation/, 別のサービス}も用意しています。
 * Starterでは、PDFのテキストをマウスで選択したときに、行番号や折り返し記号やインデント記号を選択対象にしない機能が用意されています。
   ただしこの機能はコンパイル時間を大きく増やしてしまうので、デフォルトではオフです。


== @<LaTeX>{}関連

 * Re:VIEWでは、LuaLaTeXとjlreq.clsを積極的に利用しており、採用実績も多いです。
   @<par>{i}
   Starterでは、今のところLuaLaTeXとjlreqには対応していません。今後の課題です。
 * Re:VIEWそのものではありませんが、TechboosterのRe:VIEWテンプレートではtcolorboxを全面的に採用しており、そのおかげでたとえば角丸のブロックを実現できています。
   @<par>{i}
   ただしtcolorboxを使うとコンパイル時間がかかるようになるので、Starterでは使わないようにしています。
   tcolorboxを使うと見栄えのいいデザインができることは確かなので、今後どうするかは検討中です。
 * Starterでは、環境変数「@<code>|$STARTER_CHAPTER|」を設定することで、特定の章だけをコンパイルできます。
   こうすると全部の章をコンパイルするよりずっと短い時間でコンパイルできるので、表示の確認が迅速にできます。
   @<par>{i}
   Re:VIEWにはこのような機能はありません。
 * Starterでは、@<LaTeX>{}のコンパイル回数を減らす工夫をしています。
  文章を少しだけ変更して再度コンパイルすると、Starterではコンパイル回数がたいてい1回だけで済みます。
   @<par>{i}
  Re:VIEWではいつも3回コンパイルされるので、PDF生成に時間がかかります。
 * Re:VIEWでは、PDFファイルを生成する「@<code>{review-pdfmaker}」コマンドや、ePubファイルを生成する「@<code>{review-epubmaker}」コマンドが用意されています。
   @<par>{i}
   Re:VIEWではこれらは使えません。必ず「@<code>{rake pdf}」や「@<code>{rake epub}」を使ってください。
 * 「@<code>|rake pdf|」や「@<code>|rake web|」を実行すると、Starterではコンパイルが必ず実行されます。
   @<par>{i}
   Re:VIEWではファイルが更新されていなければコンパイルされません。これは一見便利そうですが、@<LaTeX>{}のスタイルファイルを変更しただけではコンパイルされないため、トラブルのもとになります。
 * Starterでは、設定ファイル「@<file>{config-starter.yml}」の内容を@<LaTeX>{}のスタイルファイルから参照できます。
   設定によって挙動を変えたい場合に便利です。
 * Starterでは、名前が「@<code>{STARTER_}」で始まる環境変数の値を@<LaTeX>{}のスタイルファイルから参照できます。
   環境変数によって挙動を変えたい場合に便利です。
 * Starterでは表示を簡潔にするため、@<LaTeX>{}コンパイル時の出力を捨てています。
   コンパイルエラーがあった場合は、出力を捨てないようにコマンドオプションを変更してからもう一度コンパイルすることで、エラーメッセージを表示しています。
   @<par>{i}
   Re:VIEWでも出力は捨てていますが、コンパイルエラーがあった場合はコンパイル時のログファイルを表示しています。
   しかしこの方法だとエラメッセージが少し上のほうに流れてしまうので、@<LaTeX>{}に慣れていない人だとエラーメッセージを見逃してしまいます。
 * PDFファイルを生成するとき、StarterではもとのPDFファイルを削除せずに上書きする（つまりinodeが変わらない）ようにしています。
   このおかげで、macOSの@<code>{open}コマンドでPDFファイルを開くと、同じウィンドウのまま表示されます。
   @<par>{i}
   これに対し、Re:VIEWではもとのPDFファイルを消してから新しいファイルを作成します（つまりinodeが変わる）。
   そのせいで、macOSの@<code>{open}コマンドでPDFファイルを開くと毎回新しいウィンドウで表示されてしまい、いちいち前のウィンドウを閉じる必要があるので面倒です。
 * Starterでは、@<LaTeX>{}のコンパイル時間を表示します。
  以前は「@<file>{/usr/bin/time}」コマンドが必要でしたが、現在は必要としません。


== エラメッセージ

 * Starterでは、原稿ファイル（@<file>{*.re}）コンパイル時のエラーメッセージを赤い字で表示します。
   初心者はエラーメッセージが出ても気づかないことが多いので、赤く表示することで気づきやすいようにしました。
 * Starterでは、原稿ファイル（@<file>{*.re}）のコンパイル時にエラーがあると、すぐにコンパイルをすぐに終了するようにしました。
   初心者にとっては、このほうがエラーに気づきやすいはずです。
   @<br>{}
   Re:VIEWではコンパイルエラーがあっても残りのコンパイルを続けるので、エラーメッセージが流れてしまい、初心者はエラーに気づかない可能性が高いです。


== その他

 * Re:VIEWでは、プロジェクトが使っているRe:VIEWのバージョンをアップデートする機能が用意されています。たとえばRe:VIEW 4を使っているプロジェクトをRe:VIEW 5へアップデートしたいときは、ターミナルで「@<code>|review-update|」コマンドを実行します。
   @<br>{}
   Starterにはプロジェクトをアップデートする機能はありません。
 * Starterでは関連プロジェクトとして、PDFに隠しノンブルをつけるサービス「@<href>{https://kauplan.org/pdfoperation/, PDF Operation}」を提供しています。

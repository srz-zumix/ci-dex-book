# CI サービス大全集

![Status](https://img.shields.io/badge/%E6%8A%80%E8%A1%93%E6%9B%B8%E5%85%B8XX-%E6%BA%96%E5%82%99%E4%B8%AD-yellow)
![虎空棘魚](https://img.shields.io/badge/%E8%99%8E-%E7%A9%BA%E6%A3%98%E9%AD%9A-green)
[![GitHub Actions Status](https://github.com/srz-zumix/ci-dex-book/workflows/GitHub%20Actions/badge.svg?branch=master)](https://github.com/srz-zumix/ci-dex-book/actions?query=workflow%3A%22GitHub+Actions%22)

## Releases

* ![技術書典11](https://img.shields.io/badge/%E6%8A%80%E8%A1%93%E6%9B%B8%E5%85%B811-New-yellow) 2021/07/10
  * [技術書典マーケット](https://techbookfest.org/product/6495998996119552)
  * [Booth](https://srz-zumix.booth.pm/items/3099669)
    * [2020-2021セット販売](https://srz-zumix.booth.pm/items/2657500)
* ![技術書典10](https://img.shields.io/badge/%E6%8A%80%E8%A1%93%E6%9B%B8%E5%85%B810-Fin-green) 2021/01/04
  * [技術書典マーケット](https://techbookfest.org/product/6709381972361216?productVariantID=5598210112356352)
  * [Booth](https://srz-zumix.booth.pm/items/2656621)
    * [2020-2021セット販売](https://srz-zumix.booth.pm/items/2657500)
* ![技術書典8](https://img.shields.io/badge/%E6%8A%80%E8%A1%93%E6%9B%B8%E5%85%B88-Fin-green) 2020/03/07
  * [技術書典 応援祭](https://techbookfest.org/product/4931278088437760)
  * Booth: [あつまれ CI サービス　タダではじめる継続的インテグレーション生活](https://srz-zumix.booth.pm/items/1879985)

## TOC

```
技術同人誌（B5サイズ）170ページ
著者：虎空棘魚 (@srz_zumix)

【目次】

第 I 部 無料で使える CI サービス紹介

第 1 章 無料で使える CI サービス
1.1 無料とは
1.2 本書で紹介する CI サービスの前提条件
1.3 本書で紹介する CI サービス一覧
1.4 著者使用環境紹介

第 2 章 AppVeyor
2.1 概要
2.2 基本情報
2.3 使用事例
2.4 ナレッジ
（以下同上）
第 3 章 Azure Pipelines
第 4 章 Bitrise
第 5 章 Buddy
第 6 章 CircleCI
第 7 章 Cirrus CI
第 8 章 Codefresh
第 9 章 Codeship
第 10 章 Drone
第 11 章 GitHub Actions
第 12 章 JFrog Pipelines
第 13 章 Semaphore
第 14 章 Shippable
第 15 章 Travis CI
第 16 章 Wercker

第 17 章 他にもある CI サービス
17.1 iutest で使用している CI サービス
17.2 今後使ってみたい CI サービス
17.3 まだまだたくさんある?

第 II 部 無料で使える CI サービス比較

第 18 章 環境
18.1 エージェント
18.2 アーキテクチャ
18.2 環境変数

第 19 章 スペック
19.1 スペック調査方法
19.2 スペック比較表

第 20 章 並行実行
20.1 並行の種類
20.2 調査方法
20.3 並行数比較表

第 21 章 DockerHub pull rate limit 対応
21.1 対応方法
21.2 Docker config 作成方法

第 22 章 YAML
22.1 アンカーとエイリアス
22.2 マップのマージ
22.3 アンカー/エイリアスはセパレーターを超えられない
22.4 アンカー/エイリアスとマージの対応表

第 23 章 コミットコメントコマンド
23.1 Skip コミットコメントコマンド

第 24 章 シェア
24.1 YAML Config のヒット数で比較

第 25 章 セキュリティ
25.1 シークレット環境変数

第 26 章 バッジ
```

## Build

`make build` or `make ebook`

### Local

> docker run --rm -v $PWD:/work kauplan/review2.5 /bin/bash -c "cd /work; rake preproc pdf;"

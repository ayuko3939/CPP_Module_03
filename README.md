# CPP Module 03

42TokyoのCPP_Module_03プロジェクト - C++の継承と多態性を学習します。

## 概要

このモジュールでは以下のC++の概念を学習します：
- 継承（Inheritance）
- 多態性（Polymorphism）
- 仮想関数（Virtual functions）
- 抽象クラス（Abstract classes）
- ダイヤモンド継承問題（Diamond inheritance problem）

## 課題

### Exercise 00: Aaaaand... OPEN!
**ディレクトリ**: `ex00/`

ClapTrapクラスを実装する課題。
- 基本的なクラス設計とメンバ関数の実装
- コンストラクタ、デストラクタ、コピーコンストラクタ、代入演算子の実装
- attack、takeDamage、beRepairedメンバ関数の実装

**実行**:
```bash
make
./claptrap
```

### Exercise 01: Serena, my love!
**ディレクトリ**: `ex01/`

ClapTrapを継承したScavTrapクラスを実装する課題。
- 継承の基本概念を学習
- 派生クラスでのコンストラクタとデストラクタの動作
- guardGateとattack関数のオーバーライド

**実行**:
```bash
make
./scavtrap
```

### Exercise 02: Repetitive work
**ディレクトリ**: `ex02/`

ClapTrapを継承したFragTrapクラスを実装する課題。
- 複数の派生クラスの実装
- highFivesGuys関数の実装
- 継承階層での適切な初期化

**実行**:
```bash
make
./fragtrap
```

### Exercise 03: Now it's weird!
**ディレクトリ**: `ex03/`

DiamondTrapクラスを実装し、ダイヤモンド継承問題を解決する課題。
- 仮想継承（Virtual inheritance）の使用
- ScavTrapとFragTrapの両方を継承
- 名前の競合とスコープの解決

**実行**:
```bash
make
./diamondtrap
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています

## 学習ポイント

- **継承**: 基底クラスの機能を派生クラスで拡張する方法
- **多態性**: 同じインターフェースで異なる動作を実現する方法
- **仮想継承**: ダイヤモンド継承問題を解決する方法
- **Orthodox Canonical Form**: C++クラスの標準的な実装形式

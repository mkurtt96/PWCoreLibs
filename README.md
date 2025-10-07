# 🧱 PW.CoreLibs

**PW.CoreLibs** is the foundational framework layer used across all PW modules.  
It provides essential shared types, data containers, interfaces, logging utilities, input extensions, and core runtime helpers for Unreal Engine 5 projects.

These libraries form the base upon which systems such as **PW.GAS**, **PW.Ability**, and **PW.Teams** are built.

---

## ⚙️ Modules

| Module | Description | Dependencies |
|:--|:--|:--|
| **PWSharedTypes** | Core data structures and lightweight utilities shared across all modules. Includes generic containers and ability parameter types. | None |
| **PWContracts** | Common gameplay interfaces and type contracts used by higher systems. | PWSharedTypes |
| **PWLogging** | Lightweight and extensible logging framework with macros, channels, and structured output. | None |
| **PWFoundation** | Core utilities such as the global timer manager (WTM) and hex generator utilities. | None |
| **PWInput** | Enhanced input utilities and routing logic for advanced player input systems. | None |

---

## 🧩 Overview

PW.CoreLibs establishes a **modular, dependency-safe foundation** with minimal coupling and full C++ / Blueprint integration.

- **PWSharedTypes**
  - Defines core structs and lightweight data containers such as `MultiDataArray` and `SpellParams`.
  - Shared type layer for ability and gameplay data exchange.
- **PWContracts**
  - Provides gameplay contracts and interfaces such as `IDamageable`, `IEffectable`, and `IEffectReceiverInterface`.
  - Enables consistent communication between systems.
- **PWLogging**
  - Extensible log system with channels, filters, and debug macros.
  - Blueprint-safe logging through unified interfaces.
- **PWFoundation**
  - Contains the **WTM (PW Timer Manager)** for global timer handling and utility macros.
  - Includes various foundation-level utilities for runtime tasks and identifiers.
- **PWInput**
  - Enhanced input routing and component logic.
  - Built to work with Unreal’s Enhanced Input System while adding dynamic context management.

---

## 🧠 Design Goals

- Minimal inter-module dependencies  
- Clean, modular separation for scalability  
- Shared core functionality accessible across all gameplay systems  
- GAS-independent yet GAS-compatible foundation  
- Fully reusable across Unreal Engine 5 projects

---

## 🧰 Compatibility

- **Engine:** Unreal Engine 5.3+  
- **Status:** Stable Core  
- **Used By:**  
  - PW.GAS  
  - PW.Ability  
  - PW.Teams  

---

## 📄 License


This project is licensed under the **MIT License**.  
See the [LICENSE](LICENSE) file for full details.

---

## 👤 Author

**Metehan Goksel Kurtulan**  
Game Developer — Systems & Gameplay Engineering  

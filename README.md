<a href="https://www.unrealengine.com/">![Unreal Engine](https://img.shields.io/badge/Unreal-5.5-dea309?style=flat&logo=unrealengine)</a>
<a href="https://github.com/JanSeliv/Bomber/blob/main/LICENSE">![C++](https://img.shields.io/badge/Language-C++-brightgreen.svg)</a>

<p align="center"></p>

## Table of Contents
- [🕵️ Weapons, Interactions, Stealth with AI](#-weapons-interactions-stealth-with-ai)
  - [📌 Project Overview](#-project-overview)
  - [🎬 Gameplay](#-gameplay)
  - [🧾 Project Details](#-project-details)
  - [🧠 Project Intro](#-project-intro)
  - [🔁 Core Gameplay Loop](#-core-gameplay-loop)
  - [🏃 Advanced Locomotion System](#-advanced-locomotion-system)
  - [🔫 Weapons Modular System](#-weapons-modular-system)
  - [🧩 Interactions System Inspired by Hitman](#-interactions-system-inspired-by-hitman)
  - [👁️ Stealth System with AI](#-stealth-system-with-ai)
  - [📅 Changelog](#-changelog)
- [⚔️ Souls Like Combat Project](#-souls-like-combat-project)

# 🕵️ Weapons, Interactions, Stealth with AI

This project is a third person stealth action framework inspired by Hitman.  
It combines modular weapons, ALS style locomotion, and stealth AI into one extendable foundation.  

Built solo with a focus on clean architecture and scalable gameplay systems.

---

## 📌 Project Overview
- Hitman inspired stealth, interactions, and context actions.
- Modular weapons + ALS style locomotion for responsive movement and combat.
- Data driven tuning via Data Assets (minimal hardcoding).
- Blueprint friendly API for fast iteration.
- Clean and maintainable code structure.

---

## 🎬 Gameplay

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=21OzrVktwzA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/4eddc091-8649-4187-a79c-8fa5acec11e9" alt="Gameplay Demo" width="460"/>
  </a>
</p>

---

## 🧾 Project Details

| Platform | Engine | Duration | Team Size | Roles |
| --- | --- | --- | --- | --- |
| PC | Unreal Engine 5 | Three weeks | Solo | Gameplay Programmer, Systems Designer, AI Programmer |

---

## 🧠 Project Intro
Built as a Hitman inspired stealth action framework with modular systems that work together cleanly.  
The challenge was integrating locomotion, weapons, interactions, UI, and stealth AI without tight coupling.  
Solved using Actor Components, Interfaces, Data Assets, and event driven flow.

Key systems:
- ALS style locomotion
- Modular weapons (Data Assets)
- Hitman inspired interactions (doors, disguise, radial actions, body drag)
- Stealth AI (perception, patrol, distraction, takedown)
- UI (crosshair, compass, prompts, radial wheels)

---

## 🔁 Core Gameplay Loop
Designed to support multiple stealth playstyles with clear player control:
- Movement and pacing
- Distinct weapon handling
- AI that reacts fairly and predictably
- Context interactions without UI clutter

---

## 🏃 Advanced Locomotion System
Built a modular ALS style locomotion system focused on responsiveness and clean transitions.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://youtu.be/i0rsDz0GuPA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/44b01654-7111-4d7d-aa19-da9865c76b32" alt="Locomotion Demo" width="460"/>
  </a>
</p>

### Movement System
- ALS states: idle, walk, run, crouch, lean, pivots, turn in place, jump.
- Dynamic speed scaling based on movement + equipped weapon.

### Animation Quality
- Distance matching + sync groups.
- Modular anim blueprint layers.

### Audio
- Footsteps synced with surface type (physical materials).

---

## 🔫 Weapons Modular System
Reusable weapon framework designed for quick expansion and tuning.

<table>
  <tr>
    <td align="center" width="50%">
      <b>Click the image to open the video in a new tab.</b><br/><br/>
      <a href="https://youtu.be/sCOE3vaOIU0" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/0b24485b-bc9f-49cd-be3a-6c4a0dd812f5" alt="Weapons Demo 1" width="300"/>
      </a>
    </td>
    <td align="center" width="50%">
      <b>Click the image to open the video in a new tab.</b><br/><br/>
      <a href="https://www.youtube.com/watch?v=gcayfHLEJzI" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/2108ffe0-f230-49f9-aaf1-6114a8071839" alt="Weapons Demo 2" width="300"/>
      </a>
    </td>
  </tr>
</table>

### Weapon Framework
- Weapon stats driven by Data Assets (fire rate, recoil, spread, ammo).
- Supports rifles, pistols, melee with shared base components.

### Crosshair + UI
- Dynamic crosshair reacts to recoil, accuracy, movement state.
- Radial weapon selection + HUD compass + equipped weapon info.

### Projectiles + Pickup
- Projectile movement + trajectory preview.
- Overlap based pickup + prompts.

---

## 🧩 Interactions System Inspired by Hitman
Modular interaction system focused on context actions and extension.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=RzZavYTFDSE" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/b50ab5dc-881c-41f6-bb09-7817727e159c9" alt="Interactions Demo" width="460"/>
  </a>
</p>

- `PlayerInteractionComponent` (traces + priority selection)
- Context prompts + radial action wheel
- Doors, pickups, disguise, body drag
- Animation driven actions (montages)

---

## 👁️ Stealth System with AI
Readable stealth AI loop with clean state transitions.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=-o6jm9kiFkw" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/2dffad36-5769-473e-ba45-11e977f37363" alt="Stealth AI Demo" width="460"/>
  </a>
</p>

- AI Perception (sight + hearing)
- Distraction system (noise events → investigation)
- Patrol → investigate → chase → return
- Takedowns (montages + motion warping)

---

## ⚙️ Data Driven and Designer Friendly
Built for fast iteration and tuning.

- Weapon stats, AI values, and interaction rules via Data Assets
- Blueprint friendly setup for designers
- Clean, readable C++ code

---

## 📅 Changelog

#### `2025-10-06:`
- Started project foundation (character framework + input setup).
- Initial ALS style locomotion planning and animation state breakdown.

#### `2025-10-13:`
- Implemented ALS locomotion base (movement states + anim blueprint layering).
- Added pivots and turn in place foundation.

#### `2025-10-20:`
- Added distance matching + sync groups for cleaner transitions.
- Implemented footsteps with physical material based surface detection.

#### `2025-10-27:`
- Implemented modular weapon system foundation (base weapon class + components).
- Added weapon tuning using Data Assets.

#### `2025-11-03:`
- Added dynamic crosshair reacting to recoil, accuracy, and movement.
- Added recoil/spread handling and aim state transitions.

#### `2025-11-10:`
- Implemented projectiles and grenade throw support.
- Added trajectory preview using line traces.

#### `2025-11-17:`
- Implemented weapon and ammo pickup flow with interaction prompts.
- Added radial weapon selection UI.

#### `2025-11-24:`
- Implemented Interaction system foundation (`PlayerInteractionComponent`).
- Added trace prioritization + context UI prompts.

#### `2025-12-01:`
- Added door interaction set (push, pull, locked) with animation support.
- Added pickup and object handling pipeline.

#### `2025-12-08:`
- Implemented radial interaction wheel (context actions selection).

#### `2025-12-15:`
- Implemented disguise system (mesh swap + montage driven transitions).

#### `2025-12-22:`
- Implemented body drag system using physics handles + animation blending.

#### `2026-01-05:`
- Implemented Stealth AI base using AI Perception (sight + hearing).
- Added patrol routes foundation (behavior tree + blackboard).

#### `2026-01-12:`
- Added distraction system (coins / sound events → investigation logic).

#### `2026-01-18:`
- Finished full stealth state loop: patrol → investigate → chase → return.
- Added takedowns using montages + motion warping.

#### `2026-01-21:`
- Reworked README into a lead programmer friendly format.
- Reduced text and made sections scannable.
- Updated thumbnails: open in new tab + smaller image sizes.

---

## ⚔️ Souls Like Combat Project
Coming soon.

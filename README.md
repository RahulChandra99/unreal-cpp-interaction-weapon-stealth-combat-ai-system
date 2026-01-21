<p align="center"></p>

## Table of Contents
- [Weapons, Interactions, Stealth with AI](#weapons-interactions-stealth-with-ai)
  - [Project Overview](#project-overview)
  - [Gameplay](#gameplay)
  - [Project Details](#project-details)
  - [Project Intro](#project-intro)
  - [Core Gameplay Loop](#core-gameplay-loop)
  - [Advanced Locomotion System](#advanced-locomotion-system)
  - [Weapons Modular System](#weapons-modular-system)
  - [Interactions System Inspired by Hitman](#interactions-system-inspired-by-hitman)
  - [Stealth System with AI](#stealth-system-with-ai)
  - [Changelog](#changelog)
- [Souls Like Combat Project](#souls-like-combat-project)

# Weapons, Interactions, Stealth with AI

This project is a third person stealth action framework inspired by Hitman.  
It combines modular weapons, ALS style locomotion, and stealth AI into one extendable foundation.  

Built solo with a focus on clean architecture and scalable gameplay systems.

---

## Project Overview
- Hitman inspired stealth, interactions, and context actions.
- Modular weapons plus ALS style locomotion for responsive movement and combat.
- Data driven tuning via Data Assets with minimal hardcoding.
- Blueprint friendly API for fast iteration.
- Clean and maintainable code structure.

---

## Gameplay

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=21OzrVktwzA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/4eddc091-8649-4187-a79c-8fa5acec11e9" alt="Gameplay Demo" width="520"/>
  </a>
</p>

---

## Project Details

| Platform | Engine | Duration | Team Size | Roles |
| --- | --- | --- | --- | --- |
| PC | Unreal Engine 5 | Three weeks | Solo | Gameplay Programmer, Systems Designer, AI Programmer |

---

## Project Intro
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

## Core Gameplay Loop
Designed to support multiple stealth playstyles with clear player control:
- Movement and pacing
- Distinct weapon handling
- AI that reacts fairly and predictably
- Context interactions without UI clutter

---

## Advanced Locomotion System
Built a modular ALS style locomotion system focused on responsiveness and clean transitions.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://youtu.be/i0rsDz0GuPA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/44b01654-7111-4d7d-aa19-da9865c76b32" alt="Locomotion Demo" width="520"/>
  </a>
</p>

### Movement System
- ALS states: idle, walk, run, crouch, lean, pivots, turn in place, jump.
- Dynamic speed scaling based on movement plus equipped weapon.

### Animation Quality
- Distance matching plus sync groups.
- Modular anim blueprint layers.

### Audio
- Footsteps synced with surface type (physical materials).

---

## Weapons Modular System
Reusable weapon framework designed for quick expansion and tuning.

<table>
  <tr>
    <td align="center" width="50%">
      <b>Click the image to open the video in a new tab.</b><br/><br/>
      <a href="https://youtu.be/sCOE3vaOIU0" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/0b24485b-bc9f-49cd-be3a-6c4a0dd812f5" alt="Weapons Demo 1" width="360"/>
      </a>
    </td>
    <td align="center" width="50%">
      <b>Click the image to open the video in a new tab.</b><br/><br/>
      <a href="https://www.youtube.com/watch?v=gcayfHLEJzI" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/2108ffe0-f230-49f9-aaf1-6114a8071839" alt="Weapons Demo 2" width="360"/>
      </a>
    </td>
  </tr>
</table>

### Weapon Framework
- Weapon stats driven by Data Assets (fire rate, recoil, spread, ammo).
- Supports rifles, pistols, melee with shared base components.

### Crosshair plus UI
- Dynamic crosshair reacts to recoil, accuracy, movement state.
- Radial weapon selection plus HUD compass plus equipped weapon info.

### Projectiles plus Pickup
- Projectile movement plus trajectory preview.
- Overlap based pickup plus prompts.

---

## Interactions System Inspired by Hitman
Modular interaction system focused on context actions and extension.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=RzZavYTFDSE" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/b50ab5dc-881c-41f6-bb09-7817727e159c9" alt="Interactions Demo" width="520"/>
  </a>
</p>

- `PlayerInteractionComponent` (traces plus priority selection)
- Context prompts plus radial action wheel
- Doors, pickups, disguise, body drag
- Animation driven actions (montages)

---

## Stealth System with AI
Readable stealth AI loop with clean state transitions.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=-o6jm9kiFkw" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/2dffad36-5769-473e-ba45-11e977f37363" alt="Stealth AI Demo" width="520"/>
  </a>
</p>

- AI Perception (sight plus hearing)
- Distraction system (noise events to investigation)
- Patrol to investigate to chase to return
- Takedowns (montages plus motion warping)

---

## 📅 Changelog

#### `06-10-2025:`
- Started project foundation (character framework plus input setup).
- Initial ALS style locomotion planning and animation state breakdown.

#### `13-10-2025:`
- Implemented ALS locomotion base (movement states plus anim blueprint layering).
- Added pivots and turn in place foundation.

#### `20-10-2025:`
- Added distance matching plus sync groups for cleaner transitions.
- Implemented footsteps with physical material based surface detection.

#### `27-10-2025:`
- Implemented modular weapon system foundation (base weapon class plus components).
- Added weapon tuning using Data Assets.

#### `03-11-2025:`
- Added dynamic crosshair reacting to recoil, accuracy, and movement.
- Added recoil and spread handling and aim state transitions.

#### `10-11-2025:`
- Implemented projectiles and grenade throw support.
- Added trajectory preview using line traces.

#### `17-11-2025:`
- Implemented weapon and ammo pickup flow with interaction prompts.
- Added radial weapon selection UI.

#### `24-11-2025:`
- Implemented interaction system foundation (`PlayerInteractionComponent`).
- Added trace prioritization plus context UI prompts.

#### `01-12-2025:`
- Added door interaction set (push, pull, locked) with animation support.
- Added pickup and object handling pipeline.

#### `08-12-2025:`
- Implemented radial interaction wheel (context actions selection).

#### `15-12-2025:`
- Implemented disguise system (mesh swap plus montage driven transitions).

#### `22-12-2025:`
- Implemented body drag system using physics handles plus animation blending.

#### `01-01-2026:`
- Implemented stealth AI base using AI Perception (sight plus hearing).
- Added patrol routes foundation (behavior tree plus blackboard).

#### `03-01-2026:`
- Added distraction system (coins and sound events to investigation logic).

#### `05-01-2026:`
- Finished full stealth state loop: patrol to investigate to chase to return.
- Added takedowns using montages plus motion warping.



---

## Souls Like Combat Project
Coming soon.

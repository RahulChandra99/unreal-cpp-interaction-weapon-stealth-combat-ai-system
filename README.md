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
  - [Project Overview](#souls-project-overview)
  - [Gameplay](#souls-gameplay)
  - [Project Details](#souls-project-details)
  - [Core Systems](#souls-core-systems)
  - [Combat Features](#souls-combat-features)
  - [Bow and Arrow](#souls-bow-and-arrow)
  - [Modular Projectile System](#souls-modular-projectile-system)
  - [Gameplay Abilities (GAS)](#souls-gameplay-abilities-gas)
  - [UI Feedback](#souls-ui-feedback)
  - [Changelog](#souls-changelog)

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


## Interactions System Inspired by Hitman
Modular interaction system focused on context actions and extension.

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=RzZavYTFDSE" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/b50ab5dc-881c-41f6-bb09-7817727e159c9" alt="Interactions Demo" width="360"/>
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

## Changelog

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

---

# Souls Like Combat Project

Souls like combat system built in Unreal Engine using **Gameplay Ability System (GAS)**.  
Focused on melee combat feel, ability driven gameplay, modular projectiles, and UI feedback.

---

## Souls Project Overview
- Inspired by fantasy RPGs with melee and ranged combat.
- Light and heavy combos, dodge roll, block, charged attacks.
- Bow and arrow mechanics (target practice ready).
- Modular damage, hit reactions, stamina, and UI feedback.
- Built as expandable GAS based framework.


## Souls Gameplay

<p align="center">
  <b>Click the image to open the video in a new tab.</b>
</p>
<p align="center">
  <a href="https://www.youtube.com/watch?v=1wI59nvk9WY" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/c4b04593-a3e8-45b7-87bf-4bdb82668447" alt="Souls Gameplay Demo" width="520"/>
  </a>
</p>

<!-- Add more videos and gifs below if needed -->

---

## Souls Project Details

| Platform | Engine | Tech | Team Size | Roles |
| --- | --- | --- | --- | --- |
| PC | Unreal Engine 5 | C++, Blueprints, GAS | Duo | Gameplay Programmer (Combat/Systems), VFX Artist (Niagara/VFX) |

---

## Souls Collaboration
Duo project built with a VFX artist.  
I handled GAS architecture, combat systems, AI combat hooks, and UI logic. The VFX artist delivered Niagara effects for attacks, abilities, hits, and elemental feedback to improve readability and impact.

---

## Souls Core Systems
- GAS based abilities with stamina costs, cooldowns, gameplay effects, and tags.
- Modular damage pipeline (hit reactions, stagger, death handling).
- Movement support for combat and traversal (vaulting, mantling, grounded locomotion).

---

## Souls Combat Features
- Multiple melee weapons with reusable combat framework.
- Light attacks and heavy combo chains with combo UI feedback.
- Charged attacks with scaling.
- Block/guard with stamina drain and guard break.
- Dodge/roll with stamina cost and i-frame window.
- Enemy AI combat loop (attack selection, reactions, pressure).

---

## Souls Bow and Arrow
- Draw, aim, release loop integrated with GAS.
- Target practice setup for tuning aim and timing.
- Data driven arrow types (fire, freeze, poison ready for expansion).

---

## Souls Modular Projectile System
- GAS driven projectile abilities (spawn, travel, impact, apply effects).
- Optional lock style auto targeting.
- Multiple projectile types supported via reusable projectile core.

---

## Souls Gameplay Abilities (GAS)
- Health and stamina attribute sets.
- Dash ability (GAS, cost, cooldown, prediction safe flow).
- Damage, hit reaction, stagger, and status effects as Gameplay Effects.
- Extensible ability framework for future skills.

---

## Souls UI Feedback
- Health and stamina bars bound to attributes.
- Cooldown UI hooks for abilities.
- Hit feedback indicators.
- Combo counter / combat state UI hooks.

---

## Souls Changelog

#### `01-12-2025:`
- Repo and project setup (UE5, modules, folder structure).
- Planned GAS ability structure and combat scope (melee, bow, projectiles, UI, AI).
- VFX collaboration pipeline setup (Niagara naming, event hooks, asset handoff).

#### `04-12-2025:`
- GAS foundation: ASC setup, base ability class, tags, input handling plan.
- Character integration for multiplayer safe ownership flow.

#### `08-12-2025:`
- Health/Stamina attribute sets + regen, costs, cooldown effects.
- Damage pipeline v1: apply damage effects + hooks for hit reaction.

#### `11-12-2025:`
- UI v1: health/stamina bars and cooldown placeholders wired to GAS.
- VFX pass 1: basic hit feedback and ability cues (VFX artist).

#### `15-12-2025:`
- Dash ability implemented with GAS (cost/cooldown, cancel rules).
- VFX pass 2: dash trail and start/end burst (VFX artist).

#### `18-12-2025:`
- Melee light attack ability v1 (montage driven, hit windows, damage apply).
- Hit reaction trigger support for targets.

#### `22-12-2025:`
- Heavy + charged attacks v1 (hold/release, stamina scaling).
- VFX pass 3: weapon swing trails + impact bursts (VFX artist).

#### `27-12-2025:`
- Combo chain system v1 (buffered inputs, combo UI counter).
- Bug fixes for montage flow and combo edge cases.

#### `02-01-2026:`
- Block/guard ability (stamina drain, guard break rules, directional checks).
- VFX pass 4: block sparks + guard break burst (VFX artist).

#### `06-01-2026:`
- Dodge/roll ability (stamina cost, i-frames, recovery timing).
- VFX pass 5: dodge trail and dust kick (VFX artist).

#### `10-01-2026:`
- Projectile framework via GAS (spawn, travel, impact, gameplay effects).
- Target practice test map for tuning projectiles and hit feedback.

#### `14-01-2026:`
- Bow and arrow v1 (draw/aim/release, stamina usage, projectile integration).
- VFX pass 6: arrow trails + impact bursts (VFX artist).

#### `18-01-2026:`
- Special arrows support (fire/freeze effects, data driven extension points).
- VFX pass 7: elemental trails and elemental impacts (VFX artist).

#### `22-01-2026:`
- Enemy AI combat hooks: ability granting, attack selection, reaction rules.
- Polished hit reaction/death flow for AI.

#### `26-01-2026:`
- Multiplayer and replication pass on abilities and projectiles.
- Fixed common prediction/desync issues (montages, projectiles, costs).

#### `30-01-2026:`
- Polish: combat readability, UI states (stamina low, cooldown ready).
- Documentation cleanup: tags, effects naming, key classes.



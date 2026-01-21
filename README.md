<a href="https://www.unrealengine.com/">![Unreal Engine](https://img.shields.io/badge/Unreal-5.5-dea309?style=flat&logo=unrealengine)</a>
<a href="https://github.com/JanSeliv/Bomber/blob/main/LICENSE">![C++](https://img.shields.io/badge/Language-C++-brightgreen.svg)</a>

<p align="center">

</p>

## Table of Contents
- [Weapons, Interactions, Stealth and Combat System with AI](#weapons-interactions-stealth-and-combat-system-with-ai)
  - [Project Overview](#project-overview)
  - [Watch Demo](#watch-demo)
  - [Project Intro](#project-intro)
  - [Core Goals](#core-goals)
  - [Advanced Locomotion System](#advanced-locomotion-system)
  - [Weapons Modular System](#weapons-modular-system)
  - [Interactions System Inspired by Hitman](#interactions-system-inspired-by-hitman)
  - [Stealth System with AI](#stealth-system-with-ai)
  - [Summary](#summary)
  - [Get in Touch](#get-in-touch)
- [Souls Like Combat Project](#souls-like-combat-project)

# Weapons, Interactions, Stealth and Combat System with AI

### Project Overview
- Inspired by Hitman, featuring stealth mechanics, interactive environments, and context based actions.
- Combines modular weapon systems with ALS style procedural movement for fluid character control.
- Designed as a flexible, modular framework that is easy to modify, extend, and integrate new gameplay features into.
- Data driven design, no hardcoded values, all tuning via Data Assets and editor settings.
- Fully exposed, key classes, properties, and functions are available to Blueprints for fast iteration.
- Well commented codebase for readability and maintenance.

### Watch Demo
[![Watch Demo](https://github.com/user-attachments/assets/4eddc091-8649-4187-a79c-8fa5acec11e9)](https://www.youtube.com/watch?v=21OzrVktwzA)

### Project Intro
- Developing this Hitman inspired stealth gameplay framework was focused on building modular systems that feel polished, extend easily, and work together cleanly without hard dependencies.
- The main challenge was integrating several complex pillars, ALS style locomotion, modular weapons, interactions, UI, and stealth AI, while keeping the architecture clean and extendable.
- I solved this by designing each feature as a plug and play module using interfaces, actor components, data assets, and clear event based flow.

The project consists of a few key components:
- ALS style procedural locomotion framework for responsive third person movement
- Modular weapon system using Data Assets and reusable weapon components
- Interaction system inspired by Hitman, doors, disguises, pickup, drag body, radial actions
- Stealth AI with perception, patrol, distraction, and takedown gameplay loops
- UI systems for crosshair, compass, weapon UI, radial wheels, and context prompts

---

## Core Goals

### Movement and Animation
- Fluid locomotion supporting stealth pacing, combat pacing, and smooth state transitions.
- Clean animation blending when weapons, stances, or movement modes change.
- Reliable start stop pivots and turn in place for grounded movement.

### Combat and Weapons
- Data driven weapons that are easy to add, balance, and extend.
- Weapon UI reacts to accuracy, recoil, and movement state.
- Throwables and projectiles feel consistent and readable.

### Interactions Inspired by Hitman
- A unified interaction framework usable by any interactable actor.
- Context based prompts plus radial selection for multiple actions.
- Smooth workflows for disguise, pickup, door usage, and body handling.

### Stealth AI
- AI detection using sight and hearing with readable escalation.
- Distraction system that creates stealth opportunities.
- Investigation and return to patrol flow that resets reliably.

---

## Advanced Locomotion System

Built a modular ALS style locomotion system focused on responsiveness, clean transitions, and scalability.

### Movement System
- ALS style movement state coverage including idle, walk, run, crouch, lean, start, stop, pivot, turn in place, and jump.
- Dynamic speed control so locomotion stays consistent across movement states and equipped weapons.
- Smooth acceleration and deceleration handling for a grounded feel.

### Animation Quality
- Distance matching and sync groups to reduce foot sliding and improve transition accuracy.
- Animation blueprint layers to keep states modular and easy to extend.
- Clean separation so weapon state changes do not break locomotion.

### Audio Polish
- Footstep audio synced with character speed and surface detection.
- Physical material based surface checks for variation and realism.

---

## Weapons Modular System

Designed as a reusable and scalable weapon framework so new weapons can be added with minimal code changes.

### Modular Weapon Framework
- Data Assets define weapon stats, fire rate, recoil, spread, ammo type, and tuning values.
- Supports multiple weapon types such as rifles, pistols, and melee using shared base components.
- Clean composition and inheritance for easy expansion.

### Dynamic Crosshair System
- UMG crosshair reacts in real time to accuracy, recoil, and movement speed.
- Spread adjusts based on weapon state, idle, moving, aiming, firing.
- Smooth feedback for responsive shooting feel.

### Grenade and Projectile Mechanics
- Projectile throw using UProjectileMovementComponent for consistent velocity and arc.
- Trajectory visualization using line traces for predictable aiming.

### Weapon and Ammo Pickup System
- Collision overlap detection with interaction prompts.
- Pickup flow integrated into inventory style logic for clean acquisition.

### Radial Weapon Selection UI
- UMG radial UI for quick switching with highlights and feedback per slot.
- Reusable widget pattern for different gameplay contexts.

### Compass and Weapon UI
- HUD widgets showing direction and equipped weapon data.
- Direction updates via world direction vectors for accurate compass heading.

---

## Interactions System Inspired by Hitman

A key pillar was making interaction feel natural, context aware, and extendable.

### Interaction Framework
- Modular PlayerInteractionComponent built in C++ and Blueprints.
- Line traces and overlap checks to detect and prioritize interactables.
- Height aware interaction logic to pick correct animations based on placement.

### UI Indicators
- Context prompts that appear only when actions are valid.
- Fade in and fade out animations for polish.

### Door Interactions
- Multiple door types, push, pull, locked, using Timelines and Curves.
- Sound cues and prompts per door type for consistent feedback.

### Disguise System
- Take disguises from luggage props or ragdolled bodies.
- Animation montage driven transitions with state validation.
- Mesh swap logic with UI updates.

### Pickup and Object Handling
- Pickup via interaction traces with item highlighting and name display.
- Extendable to throwable objects and stash mechanics.

### Radial Interaction Wheel
- UMG radial actions menu showing all available actions.
- Selection based on input direction, highlights and executes selected option.

### Body Drag System
- Physics handle based dragging and dropping.
- Animation blending synced with movement for believable results.

### Blend With Environment Actions
- Stay busy actions such as searching, hiding, and blending.
- Blend spaces and montages for contextual interaction.

---

## Stealth System with AI

Designed to create readable stealth loops with smooth escalation and reliable reset.

### AI Perception and Detection
- AI Perception with sight and hearing senses.
- Tuned peripheral vision, detection distance, and response delay for fair behavior.

### Distraction System
- Throwable coins and sound objects generate noise events.
- Nearby AI investigates the sound source and searches the area.

### Stealth Takedowns
- Melee and weapon takedowns using animation montages.
- Motion warping for alignment and believable positioning.
- Validation checks for distance and state.

### Enemy Patrol Behavior
- Patrol routes using splines and Behavior Trees.
- Looping and random patrol support for variety.
- Idle and look around behavior plus pause points.

### AI Reactions to Stimuli
- Responses to sound, damage, and visual detection.
- Alert, chase, and return to patrol states driven by blackboard logic.

---

## Summary
This project demonstrates a scalable stealth action framework in Unreal Engine 5, combining ALS style locomotion, modular weapons, Hitman inspired interactions, and stealth AI. The focus is clean architecture and extendable systems so future features can be added without rewriting the foundation.

---

## Get in Touch
Reach out via email, connect on LinkedIn, or check the code on GitHub.

- LinkedIn: (add link)
- GitHub: (add link)
- Email: (add email)

---

## Souls Like Combat Project
Coming soon.

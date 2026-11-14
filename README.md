<h2 align="center">Stealth, Weapons and Combat AI</h2>
<p align="center">Built using C++, Blueprints and Unreal Engine 5</p>

<p align="center">
  <a href="https://www.youtube.com/watch?v=21OzrVktwzA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/4eddc091-8649-4187-a79c-8fa5acec11e9" alt="Gameplay Demo" width="520"/>
  </a>
</p>
<p align="center">Click any image on this page to watch that part on YouTube.</p>

A Hitman-inspired stealth sandbox. It has ALS-style locomotion, a modular weapon framework tuned through Data Assets, context interactions (doors, disguises, body dragging, a radial action wheel) and enemies that patrol, investigate noises and chase.

| Platform | Engine | Duration | Team Size | Roles |
| --- | --- | --- | --- | --- |
| PC | Unreal Engine 5 | Three weeks | Solo | Gameplay Programmer, Systems Designer, AI Programmer |

## Locomotion
ALS-style locomotion built on layered anim blueprints.

<p align="center">
  <a href="https://youtu.be/i0rsDz0GuPA" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/44b01654-7111-4d7d-aa19-da9865c76b32" alt="Locomotion Demo" width="520"/>
  </a>
</p>

### Movement System
- ALS states: idle, walk, run, crouch, lean, pivots, turn in place, jump.
- Movement speed scales with the movement state and the equipped weapon.

### Animation Quality
- Distance matching and sync groups.
- Modular anim blueprint layers.

### Audio
- Footsteps synced with surface type (physical materials).

---

## Weapons
A weapon framework where a new weapon is mostly a new Data Asset.

<table>
  <tr>
    <td align="center" width="50%">
      <a href="https://youtu.be/sCOE3vaOIU0" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/0b24485b-bc9f-49cd-be3a-6c4a0dd812f5" alt="Weapons Demo 1" width="520"/>
      </a>
    </td>
    <td align="center" width="50%">
      <a href="https://www.youtube.com/watch?v=gcayfHLEJzI" target="_blank" rel="noopener noreferrer">
        <img src="https://github.com/user-attachments/assets/2108ffe0-f230-49f9-aaf1-6114a8071839" alt="Weapons Demo 2" width="520"/>
      </a>
    </td>
  </tr>
</table>

### Weapon Framework
- Weapon stats driven by Data Assets (fire rate, recoil, spread, ammo).
- Rifles, pistols and melee share the same base components.

### Crosshair and UI
- The crosshair reacts to recoil, accuracy and movement state.
- Radial weapon selection, a HUD compass and equipped weapon info.

### Projectiles and pickups
- Projectile movement with a trajectory preview.
- Overlap based pickups with prompts.


## Interactions
Context actions in the style of Hitman, driven by one component on the player.

<p align="center">
  <a href="https://www.youtube.com/watch?v=RzZavYTFDSE" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/b50ab5dc-881c-41f6-bb09-7817727e159c9" alt="Interactions Demo" width="520"/>
  </a>
</p>

- `PlayerInteractionComponent` traces for interactables and picks one by priority
- Context prompts and a radial action wheel
- Doors, pickups, disguise, body drag
- Animation driven actions (montages)

---

## Enemy AI and stealth

<p align="center">
  <a href="https://www.youtube.com/watch?v=-o6jm9kiFkw" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/2dffad36-5769-473e-ba45-11e977f37363" alt="Stealth AI Demo" width="520"/>
  </a>
</p>

- AI Perception with sight and hearing
- Distractions: noise events send enemies to investigate
- States go patrol, investigate, chase, then return
- Takedowns using montages and motion warping

---

## Changelog

#### `06-10-2025:`
- Started project foundation (character framework and input setup).
- Initial ALS style locomotion planning and animation state breakdown.

#### `13-10-2025:`
- Implemented ALS locomotion base (movement states and anim blueprint layering).
- Added pivots and turn in place foundation.

#### `20-10-2025:`
- Added distance matching and sync groups for cleaner transitions.
- Implemented footsteps with physical material based surface detection.

#### `27-10-2025:`
- Implemented modular weapon system foundation (base weapon class and components).
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
- Added trace prioritization and context UI prompts.

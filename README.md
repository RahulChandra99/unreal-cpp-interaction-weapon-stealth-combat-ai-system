# Weapon and Interaction Stealth System  
Unreal Engine 5 Blueprints and C++ Project

## Project Overview  
This project shows a modular setup for weapons, interactions, and stealth with AI. It draws ideas from action stealth games and focuses on clean structure, easy expansion, and smooth player control.  
Full showcase:  
https://www.rahulchandraportfolio.com/weapons-interaction-system

## Features  

### Player Movement  
- ALS style setup with idle, walk, run, crouch, lean, pivot, turn in place and jump  
- Animation layers give smooth blend and clean control  
- Footstep audio tied to surface type and movement speed

### Weapon System  
- Data assets for all weapon stats such as rate of fire, ammo and recoil  
- Works for rifles, pistols and melee items  
- Crosshair reacts to movement, recoil and precision  
- Projectile setup uses UProjectileMovementComponent  
- Trajectory preview for items like grenades  
- Pickup logic with overlap checks and clear UI  
- Radial weapon switch menu and HUD updates

### Interaction System  
- PlayerInteractionComponent handles line traces and overlap checks  
- Interaction prompts with fade in and fade out  
- Doors with push, pull and locked states  
- Disguise pickup from props or bodies  
- Radial action menu for choosing between possible tasks  
- Body drag setup using physics handles  
- Small search and hide animations that match the environment

### Stealth and AI  
- AI Perception for sight and sound  
- Thrown items create noise and pull AI attention  
- Takedowns with animation montages and motion warping  
- Patrol paths created with splines  
- Behaviour Tree and Blackboard for alert, chase and patrol  
- Clear state logic for each AI

## Structure and Extension  
- Each weapon extends from a base class and uses data assets so you can add more items with no code change  
- Interaction logic is inside one component so you can add new interactable objects by creating child classes  
- AI uses Behaviour Trees which makes it easy to add new states, paths or reactions  
- Movement uses clear layers that allow easy editing inside the animation blueprint


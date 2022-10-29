# Tap Tap Revolution

[Live Demo](https://eractus.github.io/tapTapRevolution/)

Tap Tap Revolution(TTR) was created as a homage to the classic Dance Dance Revolution(DDR), built using HTML Canvas and vanilla Javascript.

The app was developed on a roughly 5-6 day timeframe.

## Features
<ul>
  <li>Single page game that utilizes HTML Canvas to allow dynamic arrow sprites to smoothly move up the screen.</li>
  <li>Start game modal gives players time to review the game's rules before beginning to play.</li>
  <li>Collision detection and keypress event listeners allow players to register "taps".</li>
  <li>Mute icon toggles background music off and on.</li>
  <li>Pause feature allows players to further customize their playing experience.</li>
</ul>

### Dynamic Arrow Sprites and Static Arrow Receivers

Background music, which can be toggled on and off at any time, queues the game as arrow sprites begin to glide up the screen. Using collision detection between the dynamic and static arrows' x,y positions as well as event listeners on keycodes for respective keys, players can interactively accumulate points for successfully registering the arrows. A counter also keeps track of your combo streaks and more points are awarded as your streak increases. These elements combine to create a fully immersive and interactive gaming experience.

![Live Demo](https://github.com/Eractus/tapTapRevolution/blob/master/assets/gameplay.gif)

## Project Design

TTR was designed to focus on the functionality of properly registering arrows within an acceptable range of vertical distance from the respective static arrow. Thereafter, styling was prioritized to create the same vibes and feel as the original game. Of particular importance was rendering the arrow sprites so that they animate seamlessly by cycling through the arrow image asset, which required some math.

```
  drawArrow() {
    let numFrames = 0;
    const animate = () => {
      numFrames ++;
      ctx.drawImage(
        this.directionImage,
        this.shift,
        0,
        this.width,
        this.height,
        this.x,
        this.y,
        this.width,
        this.height
      );
      this.y += this.dy;
      if (numFrames === 15) {
        this.shift += this.width;
        numFrames = 0;
        this.shift = this.shift === 1200 ? 0 : this.shift;
      }
      requestAnimationFrame(animate);
    };
    animate();
  }
```


## Possible future features

<ul>
  <li>Game reset.</li>
  <li>Animation upon successful arrow registration.</li>
  <li>Multiplayer.</li>
</ul>

# tapTapRevolution

### Overview

Tap Tap Revolution(TTR) is a take on the classic arcade game known as Dance Dance Revolution(DDR) 

DDR was a single or multi-player game where the players attempted to "dance" to the music and directional arrows that move up the screen. Towards the top of the screen there is a row of static arrows representing the four possible directional arrows: up, down, left, and right. 

The objective is to time your steps on the appropriate directional arrow key of the arcade machine to try to trigger the key just as the arrow moves on top of the respective arrow in the static row. Doing so will trigger a visual cue indicating that you've successfully registered the directional arrow and you will accrue points. 

If the player fails to trigger the key at the appropriate time, the arrow will move past the static row and off the screen. Users will be able to play the game through the duration of the song in an effort to get as high of a score as possible.

### Functionality & MVP

In TTR, players will be able to:
- [ ] Have a completely interactive experience with the game's single, dynamic screen.
- [ ] Adjust the speed of the game.
- [ ] Keep track of their score.
- [ ] Mute on/of, start and pause the game.
- [ ] Access a straightforward tutorial on how to play

### Wireframes

TTR will consist of a single screen with the rendering canvas, a mute button, an about button revealing info about the app, and nav links to the project's Github and my LinkedIn.

The simulation canvas will also include a button to control volume on/off as well as start and pause.

![alt text](https://imgur.com/ya6pyMx.png)

### Technologies

TTR will be made using the following technologies:
<ul>
  <li> Plain Javascript for game logic and overall structure.</li>
  <li> `HTML Canvas` for rendering.</li>
  <li> `Web Audio API` to incorporate tunes</li>
</ul>

There will be two scripts involved for this project:

`screen.js`: this script will govern the logic handling the DOM elements.

`tapTapRev.js`: this script will handle the logic of the game itself.

### Implementation Timeline

Over the weekend:
- [ ] Went through HTML Canvas tutorials to learn about eventh handling and collisions.
- [ ] Researched how to render the special effects of the game.

Day 1:
- [ ] Set up the canvas as well as the static assets(row of static arrows that will catch the moving arrows) via the `tapTapRev.js` file
- [ ] Finish rendering the dynamic arrows and begin to set up the logic of registering the arrows with the right input.

Day 2:
- [ ] Finish the collision detection between dynamic and static arrows.
- [ ] Figure out and render the animated aspect of the arrows, moving and dynamic.

Day 3:
- [ ] Finish styling.
- [ ] Figure out and implement the music aspect of the app.
- [ ] Build the points system of the game.

Day 4:
- [ ] Render an appropriate background.
- [ ] Set up the about and various nav links, final touches.

### Bonus Features

Some ways the game could grow in the future:
- [ ] Adding a simple Node.js backend to persist state to keep track of high scores.
- [ ] Introduce a multiplayer option with interactive controls for two players.

# Glove Controlled Robotic Hand
My project is a robotic servo motor hand controlled by a glove and flex sensors. It uses multiple servo motors that pulls strings which makes the fingers move. The servo motors are controlled by code from an Arduino that links a glove that uses flex senors to see how much the fingers should bend.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Griffin | Los Altos High School | Mechanical/Industrial Engineering | Incoming Junior

![Headstone Image](https://user-images.githubusercontent.com/107588588/174399114-551ea75e-9c26-4ab4-bb62-bbec43668cd6.jpg)

  
# Final Milestone
My final milestone is the increased reliability and accuracy of my robot. I ameliorated the sagging and fixed the reliability of the finger. As discussed in my second milestone, the arm sags because of weight. I put in a block of wood at the base to hold up the upper arm; this has reverberating positive effects throughout the arm. I also realized that the forearm was getting disconnected from the elbow servo’s horn because of the weight stress on the joint. Now, I make sure to constantly tighten the screws at that joint. 

[![Final Milestone](https://res.cloudinary.com/marcomontalbano/image/upload/v1612573869/video_to_markdown/images/youtube--F7M7imOVGug-c05b58ac6eb4c4700831b2b3070cd403.jpg )](https://www.youtube.com/watch?v=F7M7imOVGug&feature=emb_logo "Final Milestone")

# Second Milestone
My second milestone was building the hand, making the glove, and putting everything together to create the product. The hand is made of foam, with each finger being 3 segments with 2 holes each, 1 for the spring to keep it up straight, and 1 for the fishing line which you pull to move the finger. I connected the strings to their own servo motors from the basic circuit in milestone 1, testing to see if the motors would pull the string and move the fingers. Then, I attached the palm to the wrist, then the fingers to the palm, placed the motors on the wrist, and tested it with the potentiometers. I wasn't able to put on the thumb because the wrist didn't have space for a fifth servo. Once the foam hand was connected to the electrical component, I moved on to making the flex sensor glove, which was just flex sensors put on each finger of the hand. Then I replaced the potentiometers with the flex sensors in the circuit, making the foam fingers move when the glove fingers are moved. The most enjoyable part was seeing all of the parts come together and being able to move my fingers in the glove and see the giant foam fingers move too. The most challenging part was the putting together of all of the parts, since all of the parts, the motors, the fingers, the glove, all worked separately, but when they were put together, things kept going wrong. For example, the motors would be ripped off from the wrist, or the string would fall off of the motor. Eventually, every little problem was solved bit by bit, making the hand finally work.

[![Third Milestone](https://user-images.githubusercontent.com/107588588/175699373-d37d9822-0daa-4355-8c95-2231f595ed8d.jpg)
)](https://www.youtube.com/watch?v=rXIV9w1w73E "Second Milestone")

# First Milestone
  

My first milestone was making the basic electrical component for the hand mechanism, except the flex sensors were replaced with potentiometers to test everything first. The circuit works by having the 5 motors for the 5 fingers connected to the 5 tilde digital pins and having the 5 potentiometers connected to 5 analog pins. Each potentiometer and motor are connected to the 5V and ground pins on the Arduino. The code works by connecting the inputs from the potentiometer, changing them from analog to digital, and mapping them to be in the domain of the servo motors, which are 0-180. This allows the potentiometers to control the rotation of the motors. The most enjoyable part was seeing all of the motors be controlled by the individual potentiometers after hours of troubleshooting. The most challenging part of this milestone was making sure all of the wiring was correct, since there were so many different wires that had to be in the perfect location in order to work. Another very challenging part was that we only had 4 good potentiometers, so the fifth one had very tiny pins that weren’t able to stick to anything for long, leading to very glitchy motors.

[![First Milestone](https://user-images.githubusercontent.com/107588588/175699344-d662d9bd-333d-494f-94c5-68aa6e91bec7.jpg)
)](https://www.youtube.com/watch?v=xtYSaFt8PXU&feature=youtu.be "First Milestone")

# Starter Project: Useless Machine
  

My starter project was the useless machine, which is a machine where you flip the switch, and it flips the switch back, turning it back off. It works by having the switch turn on the motor, which moves the plastic arm/tail piece that pushes the switch back down, opening a rotating door to do so. The switch turning back off makes the motor move the plastic piece back to where it was before. Two limit switches stop the motor from rotating endlessly in both directions, allowing it to stop and switch direction, or just stay in one place. There’s also a two colored LED on the inside that shows which way the switch is, when it’s turned up, it’s green, when it’s turned down, it’s red. The challenges I had in making this were soldering and putting the screws in the posts. Prior to this, I had never soldered before, so I had to learn to do it while working on this project, which I got pretty quickly. However, I did make a few mistakes that were a challenge to fix. The first problem I had was having the piece I was trying to solder slide downwards, so when I finished and flipped the board over, it was way above the board. In order to fix this, I had to add more solder to connect the points and melt them together, allowing me to push the piece to be flush with the board and fix it. Another problem I had was accidentally filling the holes on the board with solder. In order to overcome this problem, I had to keep melting the solder in it, then using the suction tool right over the hole to get it out. After doing it over and over, I was finally able to figure it out, and did it for 2 holes. The other main challenge I had was the posts, which were part of the main box. Putting the tiny screws into the posts was a huge challenge because they just didn’t fit very well, and I had to just press really hard with a perfect screwdriver. I even accidentally broke part of the box while doing so, which I fixed with super glue, but I eventually overcame the challenge and got all the screws in.

[![Starter Project](https://user-images.githubusercontent.com/107588588/174400261-f236e6b6-14bc-4b24-b3e5-e617a8cfa406.jpg)
](https://www.youtube.com/watch?v=Pklw704gvm4 "Starter Project")

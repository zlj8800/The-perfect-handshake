--Inspiration--

With technology infiltrating school, industry and virtually every aspect of our lives, it's also infiltrated and affected our daily interactions with everyone around us. My initial inspiration for this project were conversations that I've had with my peers, other Hackers and Sponsor representatives about the other goal to achieve at hackathons other than creating an amazing project: taking advantage of the opportunity to connect with new friends and industry especially in a professional development context. Otherwise known as, having "rizz" in a professional setting. A very important act being having a "good" handshake as a "good" first impression. How can we help achieve this?

--What it does--

This build acts like a model of the perfect handshake, being able to interact with you and encourage your endeavour into perfecting a great handshake with all your social and professional interactions. It senses your approach via the ultrasonic sensor and raises its "arm" for a good handshake when your hand approaches a certain distance away (<20cm) that can be adjusted. It's powered by the microservo that is connected to a makeshift arm made by attachment to the servo.

--How I built it--

I built this on the Arduino Uno microprocessor to process the inputs/outputs and act as the hardware interface housing the software required to perform the function. I wired an ultrasonic sensor to the processor and carved out the model's body using cardboard, cardstock paper, tape. I carved out the housing to fit the microservo and built a makeshift arm representative of the handshake and arm. The microservo is attached to the arm and also wired to the Arduino Uno to move a certain angle (120degrees) if there is presence of a hand/object sensed by the Ultrasonic Sensor otherwise it rotates back to its original position of 0 degrees set by being at the side of the body.

--Challenges I ran into--

Initially, I wanted to build something else however, didn't have access to any of those essential hardware components and made do with what I have.
Finding a team is difficult as I am an absolute beginner with a health sciences background so it was a challenge to learn programming and understand circuits but I overcame that by being resourceful with accessing mentors and online resources.
Trial and error and problem solving (trying different things to figure out why the code and/or circuit wasn't working)

--What I learned--

I learned to be creative and resourceful with what I have available to me and still create a fun project out of it that actually worked.
I learned more about hardware, building circuits and working with C++ on the Arduino IDE. I also learned about planning housing efficiently to build an impactful visual.

--What's next...?--

Integrating more features and additional hardware
Scaling the model to be life-sized representation of a hand
Incorporating Force sensors (Touch sensors) on the hand to assess grip strength
Provides verbal feedback dependent on the handshake input
Times and informs the perfect moment and distance to shake (digitally and via visual representation screen)
Making it conversational with the user by implementing an AI model (NLP chatbot style)

--Built With--
Arduino IDE C++ Hardware (Microservo motor, Arduino UNO, Ultrasonic sensor, arts and crafts)

--Credits & References:--
HackWestern hardware lab
https://www.youtube.com/watch?v=eFxmXXSeEyk https://www.youtube.com/watch?v=If0R1Q7xL-Y&t=0s https://www.youtube.com/watch?v=TrVs3IowiMs https://www.youtube.com/watch?v=ueWr5pPxwRs https://www.youtube.com/watch?v=QbgTl6VSA9Y

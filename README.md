# Servo-Motor-design-for-robot-arm
Designing a servo motor for a robotic arm using Arduino with programming and the use of simulation programs 



Introduction 

In this task, which is considered the first task, we will design the motor, which in turn moves the robot arm as we know, moving the robot arm depends on the angle of movement, so we will choose the most appropriate motor for this task. Servo motor is the tool that enables us to control the angular or linear position of the robot arm, so we will choose this type of motor to make this task. For the servo motor to work in the required way, the microcontroller must be used to determine the required angle. We will choose the Arduino as a microcontroller, due to its ease of handling and also its programming is easy and does not require any trouble. Before installing the electronic components realistically, some simulation programs must be used to ensure that the electronic circuit is working correctly and that it is free from any errors related to installation or programming, so we will use Protues to do this task.  

Theory 


•	Servo motor

It is one of the most important types of motors that operate on direct currents, whose movement depends on the change in the degree of angle. Most servo motors contain a small internal control circuit whose function is to give feedback to the microcontroller to know the exact location of the motor shaft. Usually, the servo motor comes with a small gear that is installed on it. This type of gear gives high torque compared to the small size of the servo motor. One of the most famous applications of the servo motor is its use in the field of robotics, especially in their own arms. 


![image](https://user-images.githubusercontent.com/85449693/122657944-8e5e0200-d170-11eb-85e5-48bde2dd5b0f.png)

•	Working mechanism of servo moto

All types of servo motors have three wires connected to them. One of them is used for the power as positive and the other is used the negative as a ground, while the remaining wire is connected to the microcontroller (Arduino). The servo motor is controlled by PWM (Pulse width Modulation). The servo motor moves by 90 degrees from its original position depending on the signal from the microcontroller. The length of the pulse coming from the microcontroller determines how far the servo motor rotates. The figure on the right shows the mechanism of movement of the servo motor, depending on the length and size of the pulse.

![image](https://user-images.githubusercontent.com/85449693/122657949-9ae25a80-d170-11eb-9533-eb1140252018.png)


•	Robotic arm

Robotic arms are machines that are programmed to perform several tasks in highly efficient ways. They are widely used in the industrial field, especially in factories that require heavy work. There are many different types of robotic arms that differ according to the applications used for them but in general, most robotic arms contain six joints. Some are controlled using a stepper motor and others are controlled by a servo motor. There are different types of these arms, and we will mention the most common ones

	Cartesian robotic arms

![image](https://user-images.githubusercontent.com/85449693/122657956-b188b180-d170-11eb-985c-ce5e175007aa.png)





	Spherical robotic arms

![image](https://user-images.githubusercontent.com/85449693/122658005-13e1b200-d171-11eb-92ab-72d3b95201cd.png)




	Cylindrical robotic arms

![image](https://user-images.githubusercontent.com/85449693/122658009-1ba15680-d171-11eb-9408-89caea30ef3f.png)






	SCARA robotic arms

![image](https://user-images.githubusercontent.com/85449693/122658015-252abe80-d171-11eb-97f3-96c7ab8f6890.png)



•	The most prominent applications for robotic arms
1.	Laboratories
2.	Testing & sample handling
3.	Manufacturing
4.	Industrial automation
5.	Automated assembly Machine feeding
6.	Machine access


Servo motors control by Arduino


When controlling the servo motor, microcontrollers must be used to do these tasks. Arduino can do this easily because it contains its own libraries that enable us to program very easily compared to other types of microcontrollers. 


![image](https://user-images.githubusercontent.com/85449693/122684499-5c9b7880-d20e-11eb-8da2-b2e97d9ecb37.png)


Schematic diagram of the project 


![image](https://user-images.githubusercontent.com/85449693/122684514-7046df00-d20e-11eb-85ee-e045d6052069.png)




Conclusion 



In this project, I learned several important points on how to deal with robotic arms and how to move the arms with high accuracy according to the required angle. At first, I learned how to use the servo motor and its importance in the movement of robotic arms. For the movement of the robotic arms, it is necessary to use the servo motor to perform these tasks, so we also learned how to use the microcontroller in the movement of the servo motor. I used the Arduino as a microcontroller because it contains many libraries that make it easier for us to deal with the servo motor in the required way. After completing the programming of the Arduino, I had to make sure that the programming was correct and that the circuit connections were correct and free from any errors, so some simulation programs were used to verify that. I used the Proteus for this task and it is one of the best simulation programs that enables us to run the circuit to make sure that it is working properly. 











References 


[1]
“Understanding the basics of Servo Motor Working”. [Online]. Available: https://circuitdigest.com/article/servo-motor-working-and-basics. [Accessed: 18-Jun.-2021].

[2]
“Everything You Need to Know About Robotic Arms | RS Components”. [Online]. Available: https://uk.rs-online.com/web/generalDisplay.html?id=ideas-and-advice/robotic-arms-guide. [Accessed: 20-Jun.-2021].













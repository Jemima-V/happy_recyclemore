# Happy Recyclemore

TLDR: Happy Recyclingmore is a recycling bin lid that uses ML/AI, microcontrollers and sensors to identify various waste materials. If the material classyfies as recycleable, the lid will let it drop into the bin, otherwise it will "yeet" it.  

<h2>Background</h2>

<img src="happyRecycleLogo.png" title="Happy Recycle More Logo" width="40%"/>

This project was made during Delta Hacks to reduce recycling contamination. Contamination can damage perfectly recyclable materials preventing reprocessing and ultimatly turns it into landfill material. 

<h2>How It Works</h2>

The lid senses when an item is placed on the platfrom and takes a photo using a webcam. The image is processed and sent to a Tensorflow model which identifies the material as recycleable or not. A signal is then sent to to the Aurduino which will either launch or drop the item.  

<h2>System Requirements</h2>

To recreate this project you will need the following hardware:
- Arduino
- Servo
- Ultrasonic Sensor
- A Windows or Linux computer with USB-A or USB-C connectivity
- Webcam


To recreate this project you will need the following software:
- Python 3.8 or newer
- C++
- TensorFlow
- Tensorflow Object Detection API
- Jupyter Notesbooks
- Google Colab


<h2>Next Steps</h2>

Currently the model tries to predict everything in the picture which leads to inaccuracies since it detects things in the backgrounds like people's clothes which aren't recyclable causing it to yeet the object when it should drop it. To fix this we'd like to only use the object in the centre of the image in the prediction model or reorient the camera to not be able to see anything else.


<h2>Things We Used</h2>

![TensorFlow](https://img.shields.io/badge/TensorFlow-%23FF6F00.svg?style=for-the-badge&logo=TensorFlow&logoColor=white)
![Jupyter Notebook](https://img.shields.io/badge/jupyter-%23FA0F00.svg?style=for-the-badge&logo=jupyter&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Google Colab](https://img.shields.io/badge/Colab-F9AB00?style=for-the-badge&logo=googlecolab&color=525252)
![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Stack Overflow](https://img.shields.io/badge/-Stackoverflow-FE7A16?style=for-the-badge&logo=stack-overflow&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)



Created by: [Shaan Suthar](https://www.linkedin.com/in/shaan-suthar/), [Richard Li](https://www.linkedin.com/in/richardli2003/), [Matthew Mark](https://www.linkedin.com/in/matthew-mark-/), and [Jemima Vijayasenan](https://www.linkedin.com/in/jemimav/)

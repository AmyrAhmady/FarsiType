# FarsiType
a simple library for Farsi/Arabic strings written in C++

## Screenshots (using [ImGui](https://github.com/ocornut/imgui) for rendering)
Correct Form:  
![ScreenShot](https://raw.githubusercontent.com/AmyrAhmady/FarsiType/master/screenshots/correctForm.png)
  
Broken:   
![ScreenShot](https://raw.githubusercontent.com/AmyrAhmady/FarsiType/master/screenshots/brokenOne.png)

## About
Hello.  
I decided to do something useful in my free time and I've to admit, I kinda needed a thing like this too!.  
I'm using [ImGui](https://github.com/ocornut/imgui) made by [@ocornut](https://github.com/ocornut/) on a project and I needed to render Farsi texts. Unfortunately I wasn't able to do it for 2 reasons:  
- Farsi/Persian or Arabic languages are RTL which makes them reversed.
- They have 4 forms for each letter, so computer can't find the right one by itself.

So after 3 days of searching for an answer and ways to achieve this, I finally came here with my own library that uses C++11. (I would do it in pure C if it was my choice, but seems like it's not possible in an easy way.)  
Hope you guys find this useful!  
If you found any issue or have any suggestion, feel free to create an issue for it.  
Also, feel free to contribute and make this better for everyone :).  

## Known bugs
- Numbers are reversed, so you should write 19 instead of 91. should add a check for numbers.

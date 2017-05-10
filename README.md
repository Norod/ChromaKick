# ChromaKick
Make videos where "ChromaKey-Green" areas get twirled 

Click the thumbnail below to watch a demo of the result

<a href="http://www.youtube.com/watch?feature=player_embedded&v=U3W8ZWuc8gQ
" target="_blank"><img src="http://img.youtube.com/vi/U3W8ZWuc8gQ/0.jpg" 
alt="A video showing the result" width="240" height="180" border="10" /></a>

What I did here:

I Took GSChromaKeyFilter from [Apple's "AVGreenScreenPlayer" sample code](https://developer.apple.com/library/content/samplecode/AVGreenScreenPlayer/Introduction/Intro.html#//apple_ref/doc/uid/DTS40012325-Intro-DontLinkElementID_2 "AVGreenScreenPlayer"), made it compile for iOS and put it inside [Apple`s RossyWriter sample code](https://developer.apple.com/library/content/samplecode/RosyWriter/Introduction/Intro.html#//apple_ref/doc/uid/DTS40011110 "RosyWriter") (instead of the "Rosy" CIFilter). 
I then changed the  "Checkerboard Image Generator" background to the input image with the CITwirlDistortion applied to it

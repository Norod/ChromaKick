# ChromaKick
Make videos where "ChromaKey-Green" areas get twirled 

Click the thumbnail below to watch a demo of the result

<a href="http://www.youtube.com/watch?feature=player_embedded&v=U3W8ZWuc8gQ
" target="_blank"><img src="http://img.youtube.com/vi/U3W8ZWuc8gQ/0.jpg" 
alt="A video showing the result" width="240" height="180" border="10" /></a>

What I did here:

I Took GSChromaKeyFilter from [Apple's "AVGreenScreenPlayer" sample code](https://developer.apple.com/library/content/samplecode/AVGreenScreenPlayer/Introduction/Intro.html#//apple_ref/doc/uid/DTS40012325-Intro-DontLinkElementID_2 "AVGreenScreenPlayer"), made it compile for iOS and put it inside [Apple`s RossyWriter sample code](https://developer.apple.com/library/content/samplecode/RosyWriter/Introduction/Intro.html#//apple_ref/doc/uid/DTS40011110 "RosyWriter") (instead of the "Rosy" CIFilter). 
I then changed the  "Checkerboard Image Generator" background to the input image with the CITwirlDistortion applied to it

Click the thumbnail below to watch another demo

<a href="https://player.vimeo.com/video/217670955" target="_blank"><img src="https://i.vimeocdn.com/video/634981943_260x146.jpg" 
alt="A video showing the result" width="240" height="180" border="10" /></a>

What I did here:

I took the code from before. Also this time I took each input image frame coming in from the video camera and made two copies of it. But now, on one copy I applied a filter called CICircularWrap which caused the entire image content to wrap itself around a black filled circle in the middle. On the other copy I used a ChromaKey (green) filter where every green pixel was replaced with its corresponding pixel from the first (Circular) copy. The result is that green areas are replaced by texture of their circular surrounding. So I took a round green object (a soft ball from Ikea) and recorded it with the App. It looked like the ball is made out of a reflective material.

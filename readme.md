This is a toy ray tracing project based on Peter Shirley's Ray Tracing in One Weekend.

https://github.com/petershirley/raytracinginoneweekend

<img width="1198" alt="image" src="https://github.com/cthunman/raytracing/assets/716490/3220078e-3869-4c41-b2fe-f79f9df9b5bd">

Possible extensions:
- Create a video by rendering multiple .ppm images and converting them into an mp4: `ffmpeg -framerate 30 -i image%03d.ppm -c:v libx264 -pix_fmt yuv420p out.mp4`
- Speed up rendering using multiple threads

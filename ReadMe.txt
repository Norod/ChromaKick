
ChromaKick

This sample demonstrates how to use AVCaptureVideoDataOutput to bring frames from the camera into various processing pipelines, including CPU-based, OpenGL (i.e. on the GPU), CoreImage filters, and OpenCV. It also demonstrates best practices for writing the processed output of these pipelines to a movie file using AVAssetWriter.

The project includes a different target for each of the different processing pipelines.

Classes
ChromaKickViewController
-- This file contains the view controller logic, including support for the Record button and video preview.
ChromaKickCapturePipeline
-- This file manages the audio and video capture pipelines, including the AVCaptureSession, the various queues, and resource management.

Renderers
ChromaKickRenderer
-- This file defines a generic protocol for renderer objects used by ChromaKickCapturePipeline.
ChromaKickOpenGLRenderer
-- This file manages the OpenGL (GPU) processing for the "rosy" effect and delivers rendered buffers.
ChromaKickCPURenderer
-- This file manages the CPU processing for the "rosy" effect and delivers rendered buffers.
ChromaKickCIFilterRenderer
-- This file manages the CoreImage processing for the "rosy" effect and delivers rendered buffers.
ChromaKickOpenCVRenderer
-- This file manages the delivery of frames to an OpenCV processing block and delivers rendered buffers.

ChromaKickAppDelegate
-- This file is a standard application delegate class.

Shaders
myFilter
-- OpenGL shader code for the "rosy" effect

Utilities
MovieRecorder
-- Illustrates real-time use of AVAssetWriter to record the displayed effect.
OpenGLPixelBufferView
-- This is a view that displays pixel buffers on the screen using OpenGL.

GL
-- Utilities used by the GL processing pipeline.


===============================================================
Copyright © 2016 Apple Inc. All rights reserved.

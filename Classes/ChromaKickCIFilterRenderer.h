
/*
 Copyright (C) 2016 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 The ChromaKick CoreImage CIFilter-based effect renderer
 */

#import "ChromaKickRenderer.h"

@class GSChromaKeyFilter;

@interface ChromaKickCIFilterRenderer : NSObject <ChromaKickRenderer>

@property (nonatomic, readonly) GSChromaKeyFilter *chromaKickFilter;

@end

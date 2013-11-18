//
//  Deck.h
//  Matchismo
//
//  Created by Adam Loving on 11/17/13.
//  Copyright (c) 2013 Adam Loving. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end

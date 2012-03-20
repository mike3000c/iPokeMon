//
//  TrainerCoreData.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/27/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Trainer+DataController.h"
#import "TrainerTamedPokemon+DataController.h"
#import "Pokemon.h"
#import "BagDataController.h"


@interface TrainerCoreDataController : NSObject

+ (TrainerCoreDataController *)sharedInstance;

// Get Trainer's Data
- (Trainer *)trainer;
- (NSArray *)sixPokemons;
- (TrainerTamedPokemon *)firstPokemonOfSix;
- (TrainerTamedPokemon *)pokemonOfSixAtIndex:(NSInteger)index;
- (NSArray *)bagItemsFor:(BagQueryTargetType)targetType;

@end

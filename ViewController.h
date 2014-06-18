//
//  ViewController.h
//  Maps
//
//  Created by Chris on 6/10/14.
//  Copyright (c) 2014 CR. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController {
    
    MKMapView *mapView;
}
@property (nonatomic, retain) IBOutlet MKMapView *mapView;

-(IBAction)SetMap:(id)sender;
-(IBAction)GetLocation:(id)sender;

@end
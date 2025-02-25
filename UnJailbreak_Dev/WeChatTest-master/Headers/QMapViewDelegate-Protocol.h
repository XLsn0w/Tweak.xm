//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, QAnnotationView, QMapView, QOverlayView, QPoiInfo, QUserLocation, UIControl, UIView;
@protocol QAnnotation, QOverlay;

@protocol QMapViewDelegate <NSObject>

@optional
- (void)mapView:(QMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(QMapView *)arg1 didUpdateUserLocation:(QUserLocation *)arg2 fromHeading:(_Bool)arg3;
- (void)mapViewDidStopLocatingUser:(QMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 didAddOverlayViews:(NSArray *)arg2;
- (QOverlayView *)mapView:(QMapView *)arg1 viewForOverlay:(id <QOverlay>)arg2;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)mapView:(QMapView *)arg1 annotationView:(QAnnotationView *)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapView:(QMapView *)arg1 didDeselectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didSelectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (UIView *)mapView:(QMapView *)arg1 customCalloutForAnnotationView:(QAnnotationView *)arg2;
- (QAnnotationView *)mapView:(QMapView *)arg1 viewForAnnotation:(id <QAnnotation>)arg2;
- (void)mapView:(QMapView *)arg1 didTapPoi:(QPoiInfo *)arg2;
- (void)mapView:(QMapView *)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(QMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapView:(QMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2 gesture:(_Bool)arg3;
- (void)mapViewDidFailLoadingMap:(QMapView *)arg1 withError:(NSError *)arg2;
@end


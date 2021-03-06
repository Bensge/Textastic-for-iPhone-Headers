/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewModelDelegate.h"
#import "SCTableViewController.h"

@class SCNumericTextFieldCell;

__attribute__((visibility("hidden")))
@interface SettingsViewController : SCTableViewController <SCTableViewModelDelegate> {
	SCNumericTextFieldCell* wordWrapCell;
}
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(id)initWithStyle:(int)style withNavigationBarType:(int)navigationBarType;
-(void)tableViewModel:(id)model willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableViewModel:(id)model didSelectRowAtIndexPath:(id)indexPath;
-(void)tableViewModel:(id)model valueChangedForRowAtIndexPath:(id)indexPath;
-(void)tableViewModel:(id)model detailViewWillAppearForRowAtIndexPath:(id)detailView withDetailTableViewModel:(id)detailTableViewModel;
-(void)tableViewModel:(id)model valueChangedForSectionAtIndex:(unsigned)index;
-(void)viewDidDisappear:(BOOL)view;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewController.h"
#import "SCTableViewModelDelegate.h"

@class SCTextFieldCell, SCTableViewSection, NSArray, FTPConnection;
@protocol RemoteConnectionConfigurationDelegate;

__attribute__((visibility("hidden")))
@interface FTPConfigurationViewController : SCTableViewController <SCTableViewModelDelegate> {
	FTPConnection* connection;
	id<RemoteConnectionConfigurationDelegate> remoteConnectionConfigurationDelegate;
	int configurationMode;
	NSArray* encodingDescriptions;
	NSArray* encodingValues;
	int encodingIndex;
	SCTableViewSection* ftpSection;
	SCTableViewSection* sftpSection;
	SCTableViewSection* sftpSection2;
	SCTableViewSection* ftpsSection;
	SCTextFieldCell* privateKeyFileCell;
	SCTextFieldCell* publicKeyFileCell;
	int lastProtocol;
}
@property(copy, nonatomic) NSArray* encodingValues;
@property(copy, nonatomic) NSArray* encodingDescriptions;
@property(retain, nonatomic) FTPConnection* connection;
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)cancelButtonAction;
-(void)doneButtonAction;
-(id)initWithFTPConnection:(id)ftpconnection mode:(int)mode delegate:(id)delegate;
-(void)tableViewModel:(id)model valueChangedForRowAtIndexPath:(id)indexPath;
-(void)generateEncodingArrays;
@end

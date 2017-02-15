//
//  LocalyticsPlugin.h
//  Copyright (C) 2015 Char Software Inc., DBA Localytics
//
//  This code is provided under the Localytics Modified BSD License.
//  A copy of this license has been distributed in a file called LICENSE
//  with this source code.
//
// Please visit www.localytics.com for more information.
//

#import <Cordova/CDVPlugin.h>

@interface LocalyticsPlugin : CDVPlugin

- (void)integrate:(CDVInvokedUrlCommand *)command;
- (void)autoIntegrate:(CDVInvokedUrlCommand *)command;
- (void)openSession:(CDVInvokedUrlCommand *)command;
- (void)closeSession:(CDVInvokedUrlCommand *)command;
- (void)upload:(CDVInvokedUrlCommand *)command;

- (void)tagEvent:(CDVInvokedUrlCommand *)command;
- (void)tagScreen:(CDVInvokedUrlCommand *)command;
- (void)setCustomDimension:(CDVInvokedUrlCommand *)command;
- (void)getCustomDimension:(CDVInvokedUrlCommand *)command;
- (void)setOptedOut:(CDVInvokedUrlCommand *)command;
- (void)isOptedOut:(CDVInvokedUrlCommand *)command;

- (void)tagCustomerRegistered: (CDVInvokedUrlCommand *)command;
- (void)tagCustomerLoggedIn: (CDVInvokedUrlCommand *)command;
- (void)tagCustomerLoggedOut: (CDVInvokedUrlCommand *)command;
- (void)tagContentViewed: (CDVInvokedUrlCommand *)command;

- (void)setProfileAttribute:(CDVInvokedUrlCommand *)command;
- (void)addProfileAttributesToSet:(CDVInvokedUrlCommand *)command;
- (void)removeProfileAttributesFromSet:(CDVInvokedUrlCommand *)command;
- (void)incrementProfileAttribute:(CDVInvokedUrlCommand *)command;
- (void)decrementProfileAttribute:(CDVInvokedUrlCommand *)command;
- (void)deleteProfileAttribute:(CDVInvokedUrlCommand *)command;

- (void)setIdentifier:(CDVInvokedUrlCommand *)command;
- (void)setCustomerId:(CDVInvokedUrlCommand *)command;
- (void)setCustomerFullName:(CDVInvokedUrlCommand *)command;
- (void)setCustomerFirstName:(CDVInvokedUrlCommand *)command;
- (void)setCustomerLastName:(CDVInvokedUrlCommand *)command;
- (void)setCustomerEmail:(CDVInvokedUrlCommand *)command;
- (void)setLocation:(CDVInvokedUrlCommand *)command;

- (void)registerPush:(CDVInvokedUrlCommand *)command;
- (void)setPushDisabled:(CDVInvokedUrlCommand *)command;
- (void)isPushDisabled:(CDVInvokedUrlCommand *)command;
- (void)setTestModeEnabled:(CDVInvokedUrlCommand *)command;
- (void)isTestModeEnabled:(CDVInvokedUrlCommand *)command;
- (void)setInAppMessageDismissButtonImageWithName:(CDVInvokedUrlCommand *)command;
- (void)setInAppMessageDismissButtonLocation:(CDVInvokedUrlCommand *)command;
- (void)getInAppMessageDismissButtonLocation:(CDVInvokedUrlCommand *)command;
- (void)triggerInAppMessage:(CDVInvokedUrlCommand *)command;
- (void)dismissCurrentInAppMessage:(CDVInvokedUrlCommand *)command;

- (void)setLoggingEnabled:(CDVInvokedUrlCommand *)command;
- (void)isLoggingEnabled:(CDVInvokedUrlCommand *)command;
- (void)setSessionTimeoutInterval:(CDVInvokedUrlCommand *)command;
- (void)getSessionTimeoutInterval:(CDVInvokedUrlCommand *)command;
- (void)getInstallId:(CDVInvokedUrlCommand *)command;
- (void)getAppKey:(CDVInvokedUrlCommand *)command;
- (void)getLibraryVersion:(CDVInvokedUrlCommand *)command;

@end

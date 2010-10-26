/*
 *  Copyright (C) 2010  Chaoji Li
 *
 *  DOSPAD is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#import <UIKit/UIKit.h>
#import "DosEmuThread.h"
#import "KeyboardView.h"
#import "SDL_uikitopenglview.h"
#import "HoldIndicator.h"
#import "KeyView.h"
#import "FrameskipIndicator.h"
#import "TipView.h"
#import "CommandListView.h"
#import "SliderView.h"

@interface DosPadViewController : UIViewController
<SDL_uikitopenglview_delegate, MouseHoldDelegate, FloatingViewDelegate>
{
    IBOutlet FrameskipIndicator *fsIndicator;
    DosEmuThread * emuThread;
    BOOL fullscreen;
    IBOutlet SDL_uikitopenglview *screenView;
    IBOutlet KeyboardView *keyboard;
    IBOutlet UIButton *btnOption,*btnFullscreen;
    IBOutlet UINavigationController*navController;
    IBOutlet KeyView* k1,*k2,*k3,*k4,*k5,*k6,*k7,*k8,*k9;
    IBOutlet UILabel*labTitle,*labCycles;
    HoldIndicator *hi;
    TipView *tip;
    UIView *modalView;
    SliderView *sliderInput;
    UIButton *btnMouseLeft,*btnMouseRight;
}
@property (nonatomic,retain) TipView *tip;
@property (nonatomic,retain) FrameskipIndicator *fsIndicator;
@property (nonatomic,retain) UILabel*labTitle,*labCycles;
@property (nonatomic,retain) UINavigationController*navController;
@property (nonatomic,retain) DosEmuThread *emuThread;
@property (nonatomic,retain) SDL_uikitopenglview *screenView;
@property (nonatomic,retain) KeyboardView *keyboard;
@property (nonatomic,retain) UIButton *btnOption,*btnFullscreen;
@property (nonatomic,retain) KeyView* k1,*k2,*k3,*k4,*k5,*k6,*k7,*k8,*k9;

-(IBAction)start;
-(IBAction)hideOption;
-(IBAction)showOption;
-(IBAction)switchToFullscreen;

@end
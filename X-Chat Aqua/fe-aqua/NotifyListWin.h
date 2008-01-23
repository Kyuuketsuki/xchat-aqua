/* X-Chat Aqua
 * Copyright (C) 2002 Steve Green
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA */

#import <AppKit/AppKit.h>
#import "SG.h"
#import "TabOrWindowView.h"

@interface AddNotifyWindow : NSPanel
{
	NSPanel     * add_notify_window;
	NSTextField * add_notify_nick;
	NSTextField * add_notify_network;	
}
-(void) do_it;
@end

/****************************************************************************/

@interface NotifyListWin : SGSelfPtr 
{
    NSTableView		*notify_list_table;
    TabOrWindowView	*notify_list_view;
    NSMutableArray	*my_items;
	AddNotifyWindow *add_notify_window;
}

- (id) initWithSelfPtr:(id *) self_ptr;
- (void) show;
- (void) update;

@end

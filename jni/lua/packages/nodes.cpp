/*
** Lua binding: nodes
** Generated automatically by tolua++-1.0.92 on Fri Nov  9 11:22:32 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_nodes_open (lua_State* tolua_S);

#include "WiEngine.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_wySprite (lua_State* tolua_S)
{
 wySprite* self = (wySprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenuItemToggle (lua_State* tolua_S)
{
 wyMenuItemToggle* self = (wyMenuItemToggle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wySize (lua_State* tolua_S)
{
 wySize* self = (wySize*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyAtlasLabel (lua_State* tolua_S)
{
 wyAtlasLabel* self = (wyAtlasLabel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyLineRibbon (lua_State* tolua_S)
{
 wyLineRibbon* self = (wyLineRibbon*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wySpriteEx (lua_State* tolua_S)
{
 wySpriteEx* self = (wySpriteEx*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenuItemSprite (lua_State* tolua_S)
{
 wyMenuItemSprite* self = (wyMenuItemSprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyColorLayer (lua_State* tolua_S)
{
 wyColorLayer* self = (wyColorLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyGLSurfaceView (lua_State* tolua_S)
{
 wyGLSurfaceView* self = (wyGLSurfaceView*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyBladeRibbon (lua_State* tolua_S)
{
 wyBladeRibbon* self = (wyBladeRibbon*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wySpriteFrame (lua_State* tolua_S)
{
 wySpriteFrame* self = (wySpriteFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wySpotRibbon (lua_State* tolua_S)
{
 wySpotRibbon* self = (wySpotRibbon*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyProgressTimer (lua_State* tolua_S)
{
 wyProgressTimer* self = (wyProgressTimer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyButton (lua_State* tolua_S)
{
 wyButton* self = (wyButton*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyGLContext (lua_State* tolua_S)
{
 wyGLContext* self = (wyGLContext*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenuItemLabel (lua_State* tolua_S)
{
 wyMenuItemLabel* self = (wyMenuItemLabel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyNinePatchSprite (lua_State* tolua_S)
{
 wyNinePatchSprite* self = (wyNinePatchSprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyScrollableLayer (lua_State* tolua_S)
{
 wyScrollableLayer* self = (wyScrollableLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyToast (lua_State* tolua_S)
{
 wyToast* self = (wyToast*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTextBox (lua_State* tolua_S)
{
 wyTextBox* self = (wyTextBox*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyPageControl (lua_State* tolua_S)
{
 wyPageControl* self = (wyPageControl*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyGradientColorLayer (lua_State* tolua_S)
{
 wyGradientColorLayer* self = (wyGradientColorLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyAnimation (lua_State* tolua_S)
{
 wyAnimation* self = (wyAnimation*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyDotPageIndicator (lua_State* tolua_S)
{
 wyDotPageIndicator* self = (wyDotPageIndicator*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTextureNode (lua_State* tolua_S)
{
 wyTextureNode* self = (wyTextureNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyCharMap (lua_State* tolua_S)
{
 wyCharMap* self = (wyCharMap*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTileMapAtlas (lua_State* tolua_S)
{
 wyTileMapAtlas* self = (wyTileMapAtlas*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenu (lua_State* tolua_S)
{
 wyMenu* self = (wyMenu*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyLayer (lua_State* tolua_S)
{
 wyLayer* self = (wyLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTiledSprite (lua_State* tolua_S)
{
 wyTiledSprite* self = (wyTiledSprite*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyPoint (lua_State* tolua_S)
{
 wyPoint* self = (wyPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyActionManager (lua_State* tolua_S)
{
 wyActionManager* self = (wyActionManager*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMotionStreak (lua_State* tolua_S)
{
 wyMotionStreak* self = (wyMotionStreak*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyColor3B (lua_State* tolua_S)
{
 wyColor3B* self = (wyColor3B*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyColor4B (lua_State* tolua_S)
{
 wyColor4B* self = (wyColor4B*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyRect (lua_State* tolua_S)
{
 wyRect* self = (wyRect*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyLabel (lua_State* tolua_S)
{
 wyLabel* self = (wyLabel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyArrayTileMapAtlas (lua_State* tolua_S)
{
 wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wySpriteBatchNode (lua_State* tolua_S)
{
 wySpriteBatchNode* self = (wySpriteBatchNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyStripRibbon (lua_State* tolua_S)
{
 wyStripRibbon* self = (wyStripRibbon*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyDirector (lua_State* tolua_S)
{
 wyDirector* self = (wyDirector*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyScene (lua_State* tolua_S)
{
 wyScene* self = (wyScene*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyRibbon (lua_State* tolua_S)
{
 wyRibbon* self = (wyRibbon*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTimer (lua_State* tolua_S)
{
 wyTimer* self = (wyTimer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyScheduler (lua_State* tolua_S)
{
 wyScheduler* self = (wyScheduler*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyTGATileMapAtlas (lua_State* tolua_S)
{
 wyTGATileMapAtlas* self = (wyTGATileMapAtlas*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyRenderTexture (lua_State* tolua_S)
{
 wyRenderTexture* self = (wyRenderTexture*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMultiplexLayer (lua_State* tolua_S)
{
 wyMultiplexLayer* self = (wyMultiplexLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyAffineTransform (lua_State* tolua_S)
{
 wyAffineTransform* self = (wyAffineTransform*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyParallaxNode (lua_State* tolua_S)
{
 wyParallaxNode* self = (wyParallaxNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenuItemAtlasLabel (lua_State* tolua_S)
{
 wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyFrame (lua_State* tolua_S)
{
 wyFrame* self = (wyFrame*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyMenuItem (lua_State* tolua_S)
{
 wyMenuItem* self = (wyMenuItem*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wyAtlasNode (lua_State* tolua_S)
{
 wyAtlasNode* self = (wyAtlasNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"wySprite");
 tolua_usertype(tolua_S,"wyGridController");
 tolua_usertype(tolua_S,"wySize");
 tolua_usertype(tolua_S,"wyAtlasLabel");
 tolua_usertype(tolua_S,"wyLineRibbon");
 tolua_usertype(tolua_S,"wySpriteEx");
 tolua_usertype(tolua_S,"wyAtlasNode");
 tolua_usertype(tolua_S,"wyKeyEvent");
 tolua_usertype(tolua_S,"wySpriteFrame");
 tolua_usertype(tolua_S,"wySpotRibbon");
 tolua_usertype(tolua_S,"wyProgressTimer");
 tolua_usertype(tolua_S,"wyDirectorLifecycleListener");
 tolua_usertype(tolua_S,"wyAnimation");
 tolua_usertype(tolua_S,"wyMenuItemLabel");
 tolua_usertype(tolua_S,"wyNinePatchSprite");
 tolua_usertype(tolua_S,"wyScrollableLayer");
 tolua_usertype(tolua_S,"wyMenu");
 tolua_usertype(tolua_S,"wyDirector");
 tolua_usertype(tolua_S,"wyColor3B");
 tolua_usertype(tolua_S,"wyFrame");
 tolua_usertype(tolua_S,"wyMotionStreak");
 tolua_usertype(tolua_S,"wyColor4B");
 tolua_usertype(tolua_S,"wyLabel");
 tolua_usertype(tolua_S,"wyStripRibbon");
 tolua_usertype(tolua_S,"wyMotionEvent");
 tolua_usertype(tolua_S,"wyTexture2D");
 tolua_usertype(tolua_S,"wyTGATileMapAtlas");
 tolua_usertype(tolua_S,"wyRenderTexture");
 tolua_usertype(tolua_S,"wyMultiplexLayer");
 tolua_usertype(tolua_S,"wyMenuItemAtlasLabel");
 tolua_usertype(tolua_S,"wyMenuItemToggle");
 tolua_usertype(tolua_S,"wyCamera");
 tolua_usertype(tolua_S,"wyToast");
 tolua_usertype(tolua_S,"wyMenuItemSprite");
 tolua_usertype(tolua_S,"wyColorLayer");
 tolua_usertype(tolua_S,"wyBladeRibbon");
 tolua_usertype(tolua_S,"wyAnimate");
 tolua_usertype(tolua_S,"wyButton");
 tolua_usertype(tolua_S,"wyGLContext");
 tolua_usertype(tolua_S,"wyAffineTransform");
 tolua_usertype(tolua_S,"wyScrollableLayerListener");
 tolua_usertype(tolua_S,"wyTextBox");
 tolua_usertype(tolua_S,"wyTextBoxCallback");
 tolua_usertype(tolua_S,"wyPageControlCallback");
 tolua_usertype(tolua_S,"wyGradientColorLayer");
 tolua_usertype(tolua_S,"wyPageControl");
 tolua_usertype(tolua_S,"wyArray");
 tolua_usertype(tolua_S,"wyAction");
 tolua_usertype(tolua_S,"wyDotPageIndicator");
 tolua_usertype(tolua_S,"wyTargetSelector");
 tolua_usertype(tolua_S,"wyPageIndicator");
 tolua_usertype(tolua_S,"wyTransitionScene");
 tolua_usertype(tolua_S,"wyNodePositionCallback");
 tolua_usertype(tolua_S,"wyPoint");
 tolua_usertype(tolua_S,"wyCharMap");
 tolua_usertype(tolua_S,"wyTiledSprite");
 tolua_usertype(tolua_S,"wyGLSurfaceView");
 tolua_usertype(tolua_S,"wyResourceDecoder");
 tolua_usertype(tolua_S,"wyRect");
 tolua_usertype(tolua_S,"wyScaleMode");
 tolua_usertype(tolua_S,"wyArrayTileMapAtlas");
 tolua_usertype(tolua_S,"wyTileMapAtlas");
 tolua_usertype(tolua_S,"wyTextureNode");
 tolua_usertype(tolua_S,"wyMenuItem");
 tolua_usertype(tolua_S,"wySpriteBatchNode");
 tolua_usertype(tolua_S,"wyMWSprite");
 tolua_usertype(tolua_S,"wyTimer");
 tolua_usertype(tolua_S,"wyScheduler");
 tolua_usertype(tolua_S,"wyObject");
 tolua_usertype(tolua_S,"wyAnimationCallback");
 tolua_usertype(tolua_S,"wyScene");
 tolua_usertype(tolua_S,"wyRibbon");
 tolua_usertype(tolua_S,"wyParallaxNode");
 tolua_usertype(tolua_S,"wyNode");
 tolua_usertype(tolua_S,"wyZwoptexFrame");
 tolua_usertype(tolua_S,"wyLayer");
 tolua_usertype(tolua_S,"wyActionManager");
}

/* method: getInstance of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_getInstance00
static int tolua_nodes_wyActionManager_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyActionManager* tolua_ret = (wyActionManager*)  wyActionManager::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyActionManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_delete00
static int tolua_nodes_wyActionManager_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addActionLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_addActionLocked00
static int tolua_nodes_wyActionManager_addActionLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAction",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyAction* action = ((wyAction*)  tolua_tousertype(tolua_S,2,0));
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addActionLocked'", NULL);
#endif
  {
   self->addActionLocked(action,target);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addActionLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeActionLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_removeActionLocked00
static int tolua_nodes_wyActionManager_removeActionLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyAction* action = ((wyAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeActionLocked'", NULL);
#endif
  {
   self->removeActionLocked(action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeActionLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeActionByTagLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_removeActionByTagLocked00
static int tolua_nodes_wyActionManager_removeActionByTagLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeActionByTagLocked'", NULL);
#endif
  {
   self->removeActionByTagLocked(target,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeActionByTagLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeActionsLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_removeActionsLocked00
static int tolua_nodes_wyActionManager_removeActionsLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeActionsLocked'", NULL);
#endif
  {
   self->removeActionsLocked(target,includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeActionsLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllActionsLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_removeAllActionsLocked00
static int tolua_nodes_wyActionManager_removeAllActionsLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllActionsLocked'", NULL);
#endif
  {
   self->removeAllActionsLocked();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllActionsLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseActionLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_pauseActionLocked00
static int tolua_nodes_wyActionManager_pauseActionLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseActionLocked'", NULL);
#endif
  {
   self->pauseActionLocked(target,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseActionLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeActionLocked of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_resumeActionLocked00
static int tolua_nodes_wyActionManager_resumeActionLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeActionLocked'", NULL);
#endif
  {
   self->resumeActionLocked(target,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeActionLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeActions of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_resumeActions00
static int tolua_nodes_wyActionManager_resumeActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeActions'", NULL);
#endif
  {
   self->resumeActions(target,includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseActions of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_pauseActions00
static int tolua_nodes_wyActionManager_pauseActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseActions'", NULL);
#endif
  {
   self->pauseActions(target,includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRunningActionCount of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_getRunningActionCount00
static int tolua_nodes_wyActionManager_getRunningActionCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRunningActionCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getRunningActionCount(target);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRunningActionCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAction of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_getAction00
static int tolua_nodes_wyActionManager_getAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* target = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int tag = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAction'", NULL);
#endif
  {
   wyAction* tolua_ret = (wyAction*)  self->getAction(target,tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tick of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_tick00
static int tolua_nodes_wyActionManager_tick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tick'", NULL);
#endif
  {
   self->tick(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPhysicsNode of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_addPhysicsNode00
static int tolua_nodes_wyActionManager_addPhysicsNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* node = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPhysicsNode'", NULL);
#endif
  {
   self->addPhysicsNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPhysicsNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePhysicsNode of class  wyActionManager */
#ifndef TOLUA_DISABLE_tolua_nodes_wyActionManager_removePhysicsNode00
static int tolua_nodes_wyActionManager_removePhysicsNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyActionManager",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyActionManager* self = (wyActionManager*)  tolua_tousertype(tolua_S,1,0);
  wyNode* node = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePhysicsNode'", NULL);
#endif
  {
   self->removePhysicsNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePhysicsNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_make00
static int tolua_nodes_wyArrayTileMapAtlas_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int xTiles = ((int)  tolua_tonumber(tolua_S,5,0));
  int yTiles = ((int)  tolua_tonumber(tolua_S,6,0));
  int tiles = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   wyArrayTileMapAtlas* tolua_ret = (wyArrayTileMapAtlas*)  wyArrayTileMapAtlas::make(tex,tileWidth,tileHeight,xTiles,yTiles,&tiles);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArrayTileMapAtlas");
   tolua_pushnumber(tolua_S,(lua_Number)tiles);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_new00
static int tolua_nodes_wyArrayTileMapAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int xTiles = ((int)  tolua_tonumber(tolua_S,5,0));
  int yTiles = ((int)  tolua_tonumber(tolua_S,6,0));
  int tiles = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   wyArrayTileMapAtlas* tolua_ret = (wyArrayTileMapAtlas*)  Mtolua_new((wyArrayTileMapAtlas)(tex,tileWidth,tileHeight,xTiles,yTiles,&tiles));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArrayTileMapAtlas");
   tolua_pushnumber(tolua_S,(lua_Number)tiles);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_new00_local
static int tolua_nodes_wyArrayTileMapAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int xTiles = ((int)  tolua_tonumber(tolua_S,5,0));
  int yTiles = ((int)  tolua_tonumber(tolua_S,6,0));
  int tiles = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   wyArrayTileMapAtlas* tolua_ret = (wyArrayTileMapAtlas*)  Mtolua_new((wyArrayTileMapAtlas)(tex,tileWidth,tileHeight,xTiles,yTiles,&tiles));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArrayTileMapAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushnumber(tolua_S,(lua_Number)tiles);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_delete00
static int tolua_nodes_wyArrayTileMapAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: refreshTileValues of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_refreshTileValues00
static int tolua_nodes_wyArrayTileMapAtlas_refreshTileValues00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'refreshTileValues'", NULL);
#endif
  {
   self->refreshTileValues();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'refreshTileValues'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasTileAt of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_hasTileAt00
static int tolua_nodes_wyArrayTileMapAtlas_hasTileAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasTileAt'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasTileAt(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasTileAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHorizontalTileCount of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_getHorizontalTileCount00
static int tolua_nodes_wyArrayTileMapAtlas_getHorizontalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHorizontalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalTileCount of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_getVerticalTileCount00
static int tolua_nodes_wyArrayTileMapAtlas_getVerticalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVerticalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileValueAt of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_tileValueAt00
static int tolua_nodes_wyArrayTileMapAtlas_tileValueAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tileValueAt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->tileValueAt(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileValueAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTiles of class  wyArrayTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyArrayTileMapAtlas_getTiles00
static int tolua_nodes_wyArrayTileMapAtlas_getTiles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyArrayTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyArrayTileMapAtlas* self = (wyArrayTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTiles'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->getTiles();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTiles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_make00
static int tolua_nodes_wyAtlasLabel_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyCharMap* map = ((wyCharMap*)  tolua_tousertype(tolua_S,4,0));
  {
   wyAtlasLabel* tolua_ret = (wyAtlasLabel*)  wyAtlasLabel::make(text,tex,map);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAtlasLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_delete00
static int tolua_nodes_wyAtlasLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasLabel* self = (wyAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_getText00
static int tolua_nodes_wyAtlasLabel_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasLabel* self = (wyAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_setText00
static int tolua_nodes_wyAtlasLabel_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasLabel* self = (wyAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLineWidth of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_setLineWidth00
static int tolua_nodes_wyAtlasLabel_setLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasLabel* self = (wyAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLineWidth'", NULL);
#endif
  {
   self->setLineWidth(width);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLineWidth of class  wyAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasLabel_getLineWidth00
static int tolua_nodes_wyAtlasLabel_getLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasLabel* self = (wyAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLineWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_make00
static int tolua_nodes_wyCharMap_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyCharMap* tolua_ret = (wyCharMap*)  wyCharMap::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyCharMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_new00
static int tolua_nodes_wyCharMap_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyCharMap* tolua_ret = (wyCharMap*)  Mtolua_new((wyCharMap)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyCharMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_new00_local
static int tolua_nodes_wyCharMap_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyCharMap* tolua_ret = (wyCharMap*)  Mtolua_new((wyCharMap)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyCharMap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_delete00
static int tolua_nodes_wyCharMap_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mapChar of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_mapChar00
static int tolua_nodes_wyCharMap_mapChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
  int c = ((int)  tolua_tonumber(tolua_S,3,0));
  float leftPadding = ((float)  tolua_tonumber(tolua_S,4,0));
  float rightPadding = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mapChar'", NULL);
#endif
  {
   self->mapChar(rect,c,leftPadding,rightPadding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mapChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mapChar of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_mapChar01
static int tolua_nodes_wyCharMap_mapChar01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
  const char* frameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int c = ((int)  tolua_tonumber(tolua_S,3,0));
  float leftPadding = ((float)  tolua_tonumber(tolua_S,4,0));
  float rightPadding = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mapChar'", NULL);
#endif
  {
   self->mapChar(frameName,c,leftPadding,rightPadding);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyCharMap_mapChar00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: mapChar of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_mapChar02
static int tolua_nodes_wyCharMap_mapChar02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
  const char* zwoptexName = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* frameName = ((const char*)  tolua_tostring(tolua_S,3,0));
  int c = ((int)  tolua_tonumber(tolua_S,4,0));
  float leftPadding = ((float)  tolua_tonumber(tolua_S,5,0));
  float rightPadding = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mapChar'", NULL);
#endif
  {
   self->mapChar(zwoptexName,frameName,c,leftPadding,rightPadding);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyCharMap_mapChar01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpaceWidth of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_setSpaceWidth00
static int tolua_nodes_wyCharMap_setSpaceWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpaceWidth'", NULL);
#endif
  {
   self->setSpaceWidth(w);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpaceWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpaceWidth of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_getSpaceWidth00
static int tolua_nodes_wyCharMap_getSpaceWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpaceWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSpaceWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpaceWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTabSize of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_setTabSize00
static int tolua_nodes_wyCharMap_setTabSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
  int tabSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTabSize'", NULL);
#endif
  {
   self->setTabSize(tabSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTabSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTabSize of class  wyCharMap */
#ifndef TOLUA_DISABLE_tolua_nodes_wyCharMap_getTabSize00
static int tolua_nodes_wyCharMap_getTabSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyCharMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyCharMap* self = (wyCharMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTabSize'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTabSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTabSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyAtlasNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasNode_make00
static int tolua_nodes_wyAtlasNode_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyAtlasNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int capacity = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyAtlasNode* tolua_ret = (wyAtlasNode*)  wyAtlasNode::make(tex,itemWidth,itemHeight,capacity);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAtlasNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyAtlasNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasNode_new00
static int tolua_nodes_wyAtlasNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyAtlasNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int capacity = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyAtlasNode* tolua_ret = (wyAtlasNode*)  Mtolua_new((wyAtlasNode)(tex,itemWidth,itemHeight,capacity));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAtlasNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyAtlasNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasNode_new00_local
static int tolua_nodes_wyAtlasNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyAtlasNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int capacity = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyAtlasNode* tolua_ret = (wyAtlasNode*)  Mtolua_new((wyAtlasNode)(tex,itemWidth,itemHeight,capacity));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAtlasNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyAtlasNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAtlasNode_delete00
static int tolua_nodes_wyAtlasNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAtlasNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAtlasNode* self = (wyAtlasNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_make00
static int tolua_nodes_wyButton_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* normal = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  wyNode* selected = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
  wyNode* disabled = ((wyNode*)  tolua_tousertype(tolua_S,4,0));
  wyNode* focused = ((wyNode*)  tolua_tousertype(tolua_S,5,0));
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,6,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,7,0));
  {
   wyButton* tolua_ret = (wyButton*)  wyButton::make(normal,selected,disabled,focused,downSelector,upSelector);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_new00
static int tolua_nodes_wyButton_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* normal = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  wyNode* selected = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
  wyNode* disabled = ((wyNode*)  tolua_tousertype(tolua_S,4,0));
  wyNode* focused = ((wyNode*)  tolua_tousertype(tolua_S,5,0));
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,6,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,7,0));
  {
   wyButton* tolua_ret = (wyButton*)  Mtolua_new((wyButton)(normal,selected,disabled,focused,downSelector,upSelector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_new00_local
static int tolua_nodes_wyButton_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,7,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* normal = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  wyNode* selected = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
  wyNode* disabled = ((wyNode*)  tolua_tousertype(tolua_S,4,0));
  wyNode* focused = ((wyNode*)  tolua_tousertype(tolua_S,5,0));
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,6,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,7,0));
  {
   wyButton* tolua_ret = (wyButton*)  Mtolua_new((wyButton)(normal,selected,disabled,focused,downSelector,upSelector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyButton");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_delete00
static int tolua_nodes_wyButton_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalState of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setNormalState00
static int tolua_nodes_wyButton_setNormalState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  wyNode* normal = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalState'", NULL);
#endif
  {
   self->setNormalState(normal);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedState of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setSelectedState00
static int tolua_nodes_wyButton_setSelectedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  wyNode* selected = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedState'", NULL);
#endif
  {
   self->setSelectedState(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledState of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setDisabledState00
static int tolua_nodes_wyButton_setDisabledState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  wyNode* disabled = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledState'", NULL);
#endif
  {
   self->setDisabledState(disabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFocusedState of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setFocusedState00
static int tolua_nodes_wyButton_setFocusedState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  wyNode* focused = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFocusedState'", NULL);
#endif
  {
   self->setFocusedState(focused);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFocusedState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setTexture00
static int tolua_nodes_wyButton_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* normal = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyTexture2D* selected = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyTexture2D* disabled = ((wyTexture2D*)  tolua_tousertype(tolua_S,4,0));
  wyTexture2D* focused = ((wyTexture2D*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(normal,selected,disabled,focused);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClickScale of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_setClickScale00
static int tolua_nodes_wyButton_setClickScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClickScale'", NULL);
#endif
  {
   self->setClickScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClickScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClickScale of class  wyButton */
#ifndef TOLUA_DISABLE_tolua_nodes_wyButton_getClickScale00
static int tolua_nodes_wyButton_getClickScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyButton* self = (wyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClickScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getClickScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClickScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_make00
static int tolua_nodes_wyColorLayer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyColorLayer* tolua_ret = (wyColorLayer*)  wyColorLayer::make(color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyColorLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_new00
static int tolua_nodes_wyColorLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyColorLayer* tolua_ret = (wyColorLayer*)  Mtolua_new((wyColorLayer)(color));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyColorLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_new00_local
static int tolua_nodes_wyColorLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyColorLayer* tolua_ret = (wyColorLayer*)  Mtolua_new((wyColorLayer)(color));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyColorLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_delete00
static int tolua_nodes_wyColorLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_setContentSize00
static int tolua_nodes_wyColorLayer_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_getAlpha00
static int tolua_nodes_wyColorLayer_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_setAlpha00
static int tolua_nodes_wyColorLayer_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_getColor00
static int tolua_nodes_wyColorLayer_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_setColor00
static int tolua_nodes_wyColorLayer_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyColorLayer_setColor01
static int tolua_nodes_wyColorLayer_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyColorLayer* self = (wyColorLayer*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyColorLayer_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceCreated of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onSurfaceCreated00
static int tolua_nodes_wyDirectorLifecycleListener_onSurfaceCreated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceCreated'", NULL);
#endif
  {
   self->onSurfaceCreated(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceCreated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceChanged of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onSurfaceChanged00
static int tolua_nodes_wyDirectorLifecycleListener_onSurfaceChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceChanged'", NULL);
#endif
  {
   self->onSurfaceChanged(w,h,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceDestroyed of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onSurfaceDestroyed00
static int tolua_nodes_wyDirectorLifecycleListener_onSurfaceDestroyed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceDestroyed'", NULL);
#endif
  {
   self->onSurfaceDestroyed(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceDestroyed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDirectorPaused of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onDirectorPaused00
static int tolua_nodes_wyDirectorLifecycleListener_onDirectorPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDirectorPaused'", NULL);
#endif
  {
   self->onDirectorPaused(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDirectorPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDirectorResumed of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onDirectorResumed00
static int tolua_nodes_wyDirectorLifecycleListener_onDirectorResumed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDirectorResumed'", NULL);
#endif
  {
   self->onDirectorResumed(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDirectorResumed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDirectorEnded of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onDirectorEnded00
static int tolua_nodes_wyDirectorLifecycleListener_onDirectorEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDirectorEnded'", NULL);
#endif
  {
   self->onDirectorEnded(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDirectorEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDirectorScreenCaptured of class  wyDirectorLifecycleListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirectorLifecycleListener_onDirectorScreenCaptured00
static int tolua_nodes_wyDirectorLifecycleListener_onDirectorScreenCaptured00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirectorLifecycleListener* self = (wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDirectorScreenCaptured'", NULL);
#endif
  {
   self->onDirectorScreenCaptured(path,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDirectorScreenCaptured'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getInstance00
static int tolua_nodes_wyDirector_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyDirector* tolua_ret = (wyDirector*)  wyDirector::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyDirector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstanceNoCreate of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getInstanceNoCreate00
static int tolua_nodes_wyDirector_getInstanceNoCreate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyDirector* tolua_ret = (wyDirector*)  wyDirector::getInstanceNoCreate();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyDirector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstanceNoCreate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnding of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isEnding00
static int tolua_nodes_wyDirector_isEnding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  wyDirector::isEnding();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResourceDecoder of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setResourceDecoder00
static int tolua_nodes_wyDirector_setResourceDecoder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyResourceDecoder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyResourceDecoder* decoder = ((wyResourceDecoder*)  tolua_tousertype(tolua_S,2,0));
  {
   wyDirector::setResourceDecoder(decoder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResourceDecoder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: printUnreleasedObjects of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_printUnreleasedObjects00
static int tolua_nodes_wyDirector_printUnreleasedObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyDirector::printUnreleasedObjects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'printUnreleasedObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: printUnreleasedMemory of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_printUnreleasedMemory00
static int tolua_nodes_wyDirector_printUnreleasedMemory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool fullLog = ((bool)  tolua_toboolean(tolua_S,2,false));
  {
   wyDirector::printUnreleasedMemory(fullLog);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'printUnreleasedMemory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: printMemoryUsage of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_printMemoryUsage00
static int tolua_nodes_wyDirector_printMemoryUsage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyDirector::printMemoryUsage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'printMemoryUsage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_delete00
static int tolua_nodes_wyDirector_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachInView of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_attachInView00
static int tolua_nodes_wyDirector_attachInView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyGLSurfaceView",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyGLSurfaceView glView = *((wyGLSurfaceView*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachInView'", NULL);
#endif
  {
   self->attachInView(glView);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'attachInView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachContext of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_attachContext00
static int tolua_nodes_wyDirector_attachContext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyGLContext",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyGLContext context = *((wyGLContext*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachContext'", NULL);
#endif
  {
   self->attachContext(context);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'attachContext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccelerometerDelay of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setAccelerometerDelay00
static int tolua_nodes_wyDirector_setAccelerometerDelay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wySensorDelay delay = ((wySensorDelay) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccelerometerDelay'", NULL);
#endif
  {
   self->setAccelerometerDelay(delay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccelerometerDelay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceCreated of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_onSurfaceCreated00
static int tolua_nodes_wyDirector_onSurfaceCreated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceCreated'", NULL);
#endif
  {
   self->onSurfaceCreated();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceCreated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceChanged of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_onSurfaceChanged00
static int tolua_nodes_wyDirector_onSurfaceChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceChanged'", NULL);
#endif
  {
   self->onSurfaceChanged(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSurfaceDestroyed of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_onSurfaceDestroyed00
static int tolua_nodes_wyDirector_onSurfaceDestroyed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSurfaceDestroyed'", NULL);
#endif
  {
   self->onSurfaceDestroyed();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSurfaceDestroyed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleMode of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setScaleMode00
static int tolua_nodes_wyDirector_setScaleMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyScaleMode",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyScaleMode mode = *((wyScaleMode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleMode'", NULL);
#endif
  {
   self->setScaleMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBaseSize of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setBaseSize00
static int tolua_nodes_wyDirector_setBaseSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBaseSize'", NULL);
#endif
  {
   self->setBaseSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBaseSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pause of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_pause00
static int tolua_nodes_wyDirector_pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pause'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->pause();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resume of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_resume00
static int tolua_nodes_wyDirector_resume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resume'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->resume();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWindowSize of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getWindowSize00
static int tolua_nodes_wyDirector_getWindowSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindowSize'", NULL);
#endif
  {
   wySize tolua_ret = (wySize)  self->getWindowSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wySize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wySize));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWindowWidth of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getWindowWidth00
static int tolua_nodes_wyDirector_getWindowWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindowWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWindowWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWindowHeight of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getWindowHeight00
static int tolua_nodes_wyDirector_getWindowHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWindowHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getWindowHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWindowHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addLifecycleListener of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_addLifecycleListener00
static int tolua_nodes_wyDirector_addLifecycleListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyDirectorLifecycleListener",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyDirectorLifecycleListener* l = ((wyDirectorLifecycleListener*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addLifecycleListener'", NULL);
#endif
  {
   self->addLifecycleListener(l,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addLifecycleListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGLView of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getGLView00
static int tolua_nodes_wyDirector_getGLView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGLView'", NULL);
#endif
  {
   wyGLSurfaceView tolua_ret = (wyGLSurfaceView)  self->getGLView();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyGLSurfaceView)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyGLSurfaceView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyGLSurfaceView));
     tolua_pushusertype(tolua_S,tolua_obj,"wyGLSurfaceView");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGLView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContext of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getContext00
static int tolua_nodes_wyDirector_getContext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContext'", NULL);
#endif
  {
   wyGLContext tolua_ret = (wyGLContext)  self->getContext();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyGLContext)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyGLContext");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyGLContext));
     tolua_pushusertype(tolua_S,tolua_obj,"wyGLContext");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setShowFPS of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setShowFPS00
static int tolua_nodes_wyDirector_setShowFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setShowFPS'", NULL);
#endif
  {
   self->setShowFPS(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setShowFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCalculateFPS of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setCalculateFPS00
static int tolua_nodes_wyDirector_setCalculateFPS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCalculateFPS'", NULL);
#endif
  {
   self->setCalculateFPS(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCalculateFPS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawFrame of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_drawFrame00
static int tolua_nodes_wyDirector_drawFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawFrame'", NULL);
#endif
  {
   self->drawFrame();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxFrameRate of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setMaxFrameRate00
static int tolua_nodes_wyDirector_setMaxFrameRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  int maxFrameRate = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxFrameRate'", NULL);
#endif
  {
   self->setMaxFrameRate(maxFrameRate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxFrameRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: runWithScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_runWithScene00
static int tolua_nodes_wyDirector_runWithScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyScene* scene = ((wyScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'runWithScene'", NULL);
#endif
  {
   self->runWithScene(scene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runWithScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: popScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_popScene00
static int tolua_nodes_wyDirector_popScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'popScene'", NULL);
#endif
  {
   self->popScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'popScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: popSceneWithTransition of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_popSceneWithTransition00
static int tolua_nodes_wyDirector_popSceneWithTransition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTransitionScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyTransitionScene* trans = ((wyTransitionScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'popSceneWithTransition'", NULL);
#endif
  {
   self->popSceneWithTransition(trans);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'popSceneWithTransition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_pushScene00
static int tolua_nodes_wyDirector_pushScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyScene* scene = ((wyScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushScene'", NULL);
#endif
  {
   self->pushScene(scene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: replaceScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_replaceScene00
static int tolua_nodes_wyDirector_replaceScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  wyScene* scene = ((wyScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'replaceScene'", NULL);
#endif
  {
   self->replaceScene(scene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'replaceScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNeedCheckTexture of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setNeedCheckTexture00
static int tolua_nodes_wyDirector_setNeedCheckTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNeedCheckTexture'", NULL);
#endif
  {
   self->setNeedCheckTexture(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNeedCheckTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPreviousScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getPreviousScene00
static int tolua_nodes_wyDirector_getPreviousScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPreviousScene'", NULL);
#endif
  {
   wyScene* tolua_ret = (wyScene*)  self->getPreviousScene();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPreviousScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRunningScene of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getRunningScene00
static int tolua_nodes_wyDirector_getRunningScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRunningScene'", NULL);
#endif
  {
   wyScene* tolua_ret = (wyScene*)  self->getRunningScene();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRunningScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPaused of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isPaused00
static int tolua_nodes_wyDirector_isPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPaused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPaused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isUIPaused of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isUIPaused00
static int tolua_nodes_wyDirector_isUIPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isUIPaused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isUIPaused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isUIPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseUI of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_pauseUI00
static int tolua_nodes_wyDirector_pauseUI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseUI'", NULL);
#endif
  {
   self->pauseUI();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseUI'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeUI of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_resumeUI00
static int tolua_nodes_wyDirector_resumeUI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeUI'", NULL);
#endif
  {
   self->resumeUI();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeUI'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxFrameRate of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getMaxFrameRate00
static int tolua_nodes_wyDirector_getMaxFrameRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxFrameRate'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxFrameRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxFrameRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getProjection of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getProjection00
static int tolua_nodes_wyDirector_getProjection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getProjection'", NULL);
#endif
  {
   wyProjectionType tolua_ret = (wyProjectionType)  self->getProjection();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getProjection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isExtensionSupported of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isExtensionSupported00
static int tolua_nodes_wyDirector_isExtensionSupported00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isExtensionSupported'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isExtensionSupported(name);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isExtensionSupported'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSurfaceCreated of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isSurfaceCreated00
static int tolua_nodes_wyDirector_isSurfaceCreated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSurfaceCreated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSurfaceCreated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSurfaceCreated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeScreenshot of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_makeScreenshot00
static int tolua_nodes_wyDirector_makeScreenshot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeScreenshot'", NULL);
#endif
  {
   self->makeScreenshot(path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeScreenshot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeScreenshot of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_makeScreenshot01
static int tolua_nodes_wyDirector_makeScreenshot01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeScreenshot'", NULL);
#endif
  {
   self->makeScreenshot(path,rect);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyDirector_makeScreenshot00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeScreenshot of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_makeScreenshot02
static int tolua_nodes_wyDirector_makeScreenshot02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  wyNode* node = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeScreenshot'", NULL);
#endif
  {
   self->makeScreenshot(path,node);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyDirector_makeScreenshot01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentFrameRate of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getCurrentFrameRate00
static int tolua_nodes_wyDirector_getCurrentFrameRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentFrameRate'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getCurrentFrameRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentFrameRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFocusEnabled of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_isFocusEnabled00
static int tolua_nodes_wyDirector_isFocusEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFocusEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFocusEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFocusEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFocusEnabled of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setFocusEnabled00
static int tolua_nodes_wyDirector_setFocusEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFocusEnabled'", NULL);
#endif
  {
   self->setFocusEnabled(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFocusEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNextDeltaTimeZero of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setNextDeltaTimeZero00
static int tolua_nodes_wyDirector_setNextDeltaTimeZero00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNextDeltaTimeZero'", NULL);
#endif
  {
   self->setNextDeltaTimeZero(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNextDeltaTimeZero'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTickFactor of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_setTickFactor00
static int tolua_nodes_wyDirector_setTickFactor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTickFactor'", NULL);
#endif
  {
   self->setTickFactor(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTickFactor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTickFactor of class  wyDirector */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDirector_getTickFactor00
static int tolua_nodes_wyDirector_getTickFactor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDirector* self = (wyDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTickFactor'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTickFactor();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTickFactor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wyFrame_new00
static int tolua_nodes_wyFrame_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   wyFrame* tolua_ret = (wyFrame*)  Mtolua_new((wyFrame)(duration));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wyFrame_new00_local
static int tolua_nodes_wyFrame_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   wyFrame* tolua_ret = (wyFrame*)  Mtolua_new((wyFrame)(duration));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyFrame");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wyFrame_delete00
static int tolua_nodes_wyFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyFrame* self = (wyFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDuration of class  wyFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wyFrame_getDuration00
static int tolua_nodes_wyFrame_getDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyFrame* self = (wyFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDuration'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDuration of class  wyFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wyFrame_setDuration00
static int tolua_nodes_wyFrame_setDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyFrame* self = (wyFrame*)  tolua_tousertype(tolua_S,1,0);
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDuration'", NULL);
#endif
  {
   self->setDuration(duration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_make00
static int tolua_nodes_wyGradientColorLayer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B fromColor = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B toColor = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  int degree = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   wyGradientColorLayer* tolua_ret = (wyGradientColorLayer*)  wyGradientColorLayer::make(fromColor,toColor,degree);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyGradientColorLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_new00
static int tolua_nodes_wyGradientColorLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B fromColor = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B toColor = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  int degree = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   wyGradientColorLayer* tolua_ret = (wyGradientColorLayer*)  Mtolua_new((wyGradientColorLayer)(fromColor,toColor,degree));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyGradientColorLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_new00_local
static int tolua_nodes_wyGradientColorLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B fromColor = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B toColor = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  int degree = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   wyGradientColorLayer* tolua_ret = (wyGradientColorLayer*)  Mtolua_new((wyGradientColorLayer)(fromColor,toColor,degree));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyGradientColorLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDegree of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_setDegree00
static int tolua_nodes_wyGradientColorLayer_setDegree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
  int degree = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDegree'", NULL);
#endif
  {
   self->setDegree(degree);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDegree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDegree of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_getDegree00
static int tolua_nodes_wyGradientColorLayer_getDegree00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDegree'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDegree();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDegree'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFromColor of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_setFromColor00
static int tolua_nodes_wyGradientColorLayer_setFromColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFromColor'", NULL);
#endif
  {
   self->setFromColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFromColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFromColor of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_getFromColor00
static int tolua_nodes_wyGradientColorLayer_getFromColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFromColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getFromColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFromColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setToColor of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_setToColor00
static int tolua_nodes_wyGradientColorLayer_setToColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setToColor'", NULL);
#endif
  {
   self->setToColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setToColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getToColor of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_getToColor00
static int tolua_nodes_wyGradientColorLayer_getToColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getToColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getToColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getToColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_delete00
static int tolua_nodes_wyGradientColorLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyGradientColorLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyGradientColorLayer_setContentSize00
static int tolua_nodes_wyGradientColorLayer_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyGradientColorLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyGradientColorLayer* self = (wyGradientColorLayer*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make00
static int tolua_nodes_wyLabel_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int resId = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(resId);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make01
static int tolua_nodes_wyLabel_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int resId = ((int)  tolua_tonumber(tolua_S,2,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,3,0));
  const char* fontPath = ((const char*)  tolua_tostring(tolua_S,4,0));
  bool isFile = ((bool)  tolua_toboolean(tolua_S,5,false));
  float width = ((float)  tolua_tonumber(tolua_S,6,0));
  wyTexture2D::TextAlignment alignment = ((wyTexture2D::TextAlignment) (int)  tolua_tonumber(tolua_S,7,wyTexture2D::LEFT));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(resId,fontSize,fontPath,isFile,width,alignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyLabel_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make02
static int tolua_nodes_wyLabel_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int resId = ((int)  tolua_tonumber(tolua_S,2,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,3,0));
  wyFontStyle style = ((wyFontStyle) (int)  tolua_tonumber(tolua_S,4,NORMAL));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  float width = ((float)  tolua_tonumber(tolua_S,6,0));
  wyTexture2D::TextAlignment alignment = ((wyTexture2D::TextAlignment) (int)  tolua_tonumber(tolua_S,7,wyTexture2D::LEFT));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(resId,fontSize,style,fontName,width,alignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyLabel_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make03
static int tolua_nodes_wyLabel_make03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(text);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyLabel_make02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make04
static int tolua_nodes_wyLabel_make04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,3,0));
  const char* fontPath = ((const char*)  tolua_tostring(tolua_S,4,0));
  bool isFile = ((bool)  tolua_toboolean(tolua_S,5,false));
  float width = ((float)  tolua_tonumber(tolua_S,6,0));
  wyTexture2D::TextAlignment alignment = ((wyTexture2D::TextAlignment) (int)  tolua_tonumber(tolua_S,7,wyTexture2D::LEFT));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(text,fontSize,fontPath,isFile,width,alignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyLabel_make03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_make05
static int tolua_nodes_wyLabel_make05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isstring(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,3,0));
  wyFontStyle style = ((wyFontStyle) (int)  tolua_tonumber(tolua_S,4,NORMAL));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,5,NULL));
  float width = ((float)  tolua_tonumber(tolua_S,6,0));
  wyTexture2D::TextAlignment alignment = ((wyTexture2D::TextAlignment) (int)  tolua_tonumber(tolua_S,7,wyTexture2D::LEFT));
  {
   wyLabel* tolua_ret = (wyLabel*)  wyLabel::make(text,fontSize,style,fontName,width,alignment);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLabel");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyLabel_make04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_delete00
static int tolua_nodes_wyLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getText00
static int tolua_nodes_wyLabel_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setText00
static int tolua_nodes_wyLabel_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setText01
static int tolua_nodes_wyLabel_setText01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  int resId = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(resId);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyLabel_setText00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setFontSize00
static int tolua_nodes_wyLabel_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  float fontSize = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontSize'", NULL);
#endif
  {
   self->setFontSize(fontSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontSize of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getFontSize00
static int tolua_nodes_wyLabel_getFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontSize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontStyle of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setFontStyle00
static int tolua_nodes_wyLabel_setFontStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  wyFontStyle fontStyle = ((wyFontStyle) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontStyle'", NULL);
#endif
  {
   self->setFontStyle(fontStyle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontStyle of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getFontStyle00
static int tolua_nodes_wyLabel_getFontStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontStyle'", NULL);
#endif
  {
   wyFontStyle tolua_ret = (wyFontStyle)  self->getFontStyle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setFontName00
static int tolua_nodes_wyLabel_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontName'", NULL);
#endif
  {
   self->setFontName(fontName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontName of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getFontName00
static int tolua_nodes_wyLabel_getFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontPath of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setFontPath00
static int tolua_nodes_wyLabel_setFontPath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* fontPath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFontPath'", NULL);
#endif
  {
   self->setFontPath(fontPath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontPath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFontPath of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getFontPath00
static int tolua_nodes_wyLabel_getFontPath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFontPath'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getFontPath();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFontPath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLineWidth of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_setLineWidth00
static int tolua_nodes_wyLabel_setLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
  float lineWidth = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLineWidth'", NULL);
#endif
  {
   self->setLineWidth(lineWidth);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLineWidth of class  wyLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLabel_getLineWidth00
static int tolua_nodes_wyLabel_getLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLabel* self = (wyLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLineWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLayer_make00
static int tolua_nodes_wyLayer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyLayer* tolua_ret = (wyLayer*)  wyLayer::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLayer_new00
static int tolua_nodes_wyLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyLayer* tolua_ret = (wyLayer*)  Mtolua_new((wyLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLayer_new00_local
static int tolua_nodes_wyLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyLayer* tolua_ret = (wyLayer*)  Mtolua_new((wyLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLayer_delete00
static int tolua_nodes_wyLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLayer* self = (wyLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_make00
static int tolua_nodes_wyMenu_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMenu* tolua_ret = (wyMenu*)  wyMenu::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenu");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_new00
static int tolua_nodes_wyMenu_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMenu* tolua_ret = (wyMenu*)  Mtolua_new((wyMenu)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenu");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_new00_local
static int tolua_nodes_wyMenu_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMenu* tolua_ret = (wyMenu*)  Mtolua_new((wyMenu)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenu");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_delete00
static int tolua_nodes_wyMenu_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesBegan of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_touchesBegan00
static int tolua_nodes_wyMenu_touchesBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesBegan(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesMoved of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_touchesMoved00
static int tolua_nodes_wyMenu_touchesMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesMoved(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesEnded of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_touchesEnded00
static int tolua_nodes_wyMenu_touchesEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesEnded(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesCancelled of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_touchesCancelled00
static int tolua_nodes_wyMenu_touchesCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesCancelled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesCancelled(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_hitTest00
static int tolua_nodes_wyMenu_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsVertically of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_alignItemsVertically00
static int tolua_nodes_wyMenu_alignItemsVertically00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  float padding = ((float)  tolua_tonumber(tolua_S,2,DEFAULT_PADDING));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsVertically'", NULL);
#endif
  {
   self->alignItemsVertically(padding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsVertically'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsHorizontally of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_alignItemsHorizontally00
static int tolua_nodes_wyMenu_alignItemsHorizontally00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  float padding = ((float)  tolua_tonumber(tolua_S,2,DEFAULT_PADDING));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsHorizontally'", NULL);
#endif
  {
   self->alignItemsHorizontally(padding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsHorizontally'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsInColumns of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_alignItemsInColumns00
static int tolua_nodes_wyMenu_alignItemsInColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
  int columns = ((int)  tolua_tonumber(tolua_S,3,0));
  float padding = ((float)  tolua_tonumber(tolua_S,4,DEFAULT_PADDING));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsInColumns'", NULL);
#endif
  {
   self->alignItemsInColumns(count,&columns,padding);
   tolua_pushnumber(tolua_S,(lua_Number)columns);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsInColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsInRows of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_alignItemsInRows00
static int tolua_nodes_wyMenu_alignItemsInRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
  int rows = ((int)  tolua_tonumber(tolua_S,3,0));
  float padding = ((float)  tolua_tonumber(tolua_S,4,DEFAULT_PADDING));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsInRows'", NULL);
#endif
  {
   self->alignItemsInRows(count,&rows,padding);
   tolua_pushnumber(tolua_S,(lua_Number)rows);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsInRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addMenuItem of class  wyMenu */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenu_addMenuItem00
static int tolua_nodes_wyMenu_addMenuItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenu",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenu* self = (wyMenu*)  tolua_tousertype(tolua_S,1,0);
  wyMenuItem* item = ((wyMenuItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addMenuItem'", NULL);
#endif
  {
   self->addMenuItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMenuItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_make00
static int tolua_nodes_wyMenuItem_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  {
   wyMenuItem* tolua_ret = (wyMenuItem*)  wyMenuItem::make(downSelector,upSelector);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItem");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_new00
static int tolua_nodes_wyMenuItem_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  {
   wyMenuItem* tolua_ret = (wyMenuItem*)  Mtolua_new((wyMenuItem)(downSelector,upSelector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItem");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_new00_local
static int tolua_nodes_wyMenuItem_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  {
   wyMenuItem* tolua_ret = (wyMenuItem*)  Mtolua_new((wyMenuItem)(downSelector,upSelector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItem");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_delete00
static int tolua_nodes_wyMenuItem_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItem* self = (wyMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: beforeInvoke of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_beforeInvoke00
static int tolua_nodes_wyMenuItem_beforeInvoke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItem* self = (wyMenuItem*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beforeInvoke'", NULL);
#endif
  {
   self->beforeInvoke(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beforeInvoke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClickScale of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_setClickScale00
static int tolua_nodes_wyMenuItem_setClickScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItem* self = (wyMenuItem*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClickScale'", NULL);
#endif
  {
   self->setClickScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClickScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClickScale of class  wyMenuItem */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItem_getClickScale00
static int tolua_nodes_wyMenuItem_getClickScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItem* self = (wyMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClickScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getClickScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClickScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_make00
static int tolua_nodes_wyMenuItemAtlasLabel_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyAtlasLabel* label = ((wyAtlasLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemAtlasLabel* tolua_ret = (wyMenuItemAtlasLabel*)  wyMenuItemAtlasLabel::make(downSelector,upSelector,label);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemAtlasLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_new00
static int tolua_nodes_wyMenuItemAtlasLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyAtlasLabel* label = ((wyAtlasLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemAtlasLabel* tolua_ret = (wyMenuItemAtlasLabel*)  Mtolua_new((wyMenuItemAtlasLabel)(downSelector,upSelector,label));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemAtlasLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_new00_local
static int tolua_nodes_wyMenuItemAtlasLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyAtlasLabel* label = ((wyAtlasLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemAtlasLabel* tolua_ret = (wyMenuItemAtlasLabel*)  Mtolua_new((wyMenuItemAtlasLabel)(downSelector,upSelector,label));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemAtlasLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_delete00
static int tolua_nodes_wyMenuItemAtlasLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setSelected00
static int tolua_nodes_wyMenuItemAtlasLabel_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setEnabled00
static int tolua_nodes_wyMenuItemAtlasLabel_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: beforeInvoke of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_beforeInvoke00
static int tolua_nodes_wyMenuItemAtlasLabel_beforeInvoke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beforeInvoke'", NULL);
#endif
  {
   self->beforeInvoke(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beforeInvoke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_getAlpha00
static int tolua_nodes_wyMenuItemAtlasLabel_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setAlpha00
static int tolua_nodes_wyMenuItemAtlasLabel_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_getColor00
static int tolua_nodes_wyMenuItemAtlasLabel_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setColor00
static int tolua_nodes_wyMenuItemAtlasLabel_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setColor01
static int tolua_nodes_wyMenuItemAtlasLabel_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyMenuItemAtlasLabel_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledColor of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setDisabledColor00
static int tolua_nodes_wyMenuItemAtlasLabel_setDisabledColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledColor'", NULL);
#endif
  {
   self->setDisabledColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledColor of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_getDisabledColor00
static int tolua_nodes_wyMenuItemAtlasLabel_getDisabledColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getDisabledColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLabel of class  wyMenuItemAtlasLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemAtlasLabel_setLabel00
static int tolua_nodes_wyMenuItemAtlasLabel_setLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemAtlasLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAtlasLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemAtlasLabel* self = (wyMenuItemAtlasLabel*)  tolua_tousertype(tolua_S,1,0);
  wyAtlasLabel* label = ((wyAtlasLabel*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLabel'", NULL);
#endif
  {
   self->setLabel(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_make00
static int tolua_nodes_wyMenuItemLabel_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyLabel* label = ((wyLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemLabel* tolua_ret = (wyMenuItemLabel*)  wyMenuItemLabel::make(downSelector,upSelector,label);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_new00
static int tolua_nodes_wyMenuItemLabel_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyLabel* label = ((wyLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemLabel* tolua_ret = (wyMenuItemLabel*)  Mtolua_new((wyMenuItemLabel)(downSelector,upSelector,label));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_new00_local
static int tolua_nodes_wyMenuItemLabel_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wyLabel* label = ((wyLabel*)  tolua_tousertype(tolua_S,4,0));
  {
   wyMenuItemLabel* tolua_ret = (wyMenuItemLabel*)  Mtolua_new((wyMenuItemLabel)(downSelector,upSelector,label));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemLabel");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_delete00
static int tolua_nodes_wyMenuItemLabel_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setSelected00
static int tolua_nodes_wyMenuItemLabel_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setEnabled00
static int tolua_nodes_wyMenuItemLabel_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: beforeInvoke of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_beforeInvoke00
static int tolua_nodes_wyMenuItemLabel_beforeInvoke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beforeInvoke'", NULL);
#endif
  {
   self->beforeInvoke(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beforeInvoke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_getAlpha00
static int tolua_nodes_wyMenuItemLabel_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setAlpha00
static int tolua_nodes_wyMenuItemLabel_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_getColor00
static int tolua_nodes_wyMenuItemLabel_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setColor00
static int tolua_nodes_wyMenuItemLabel_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setColor01
static int tolua_nodes_wyMenuItemLabel_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyMenuItemLabel_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLabel of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setLabel00
static int tolua_nodes_wyMenuItemLabel_setLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  wyLabel* label = ((wyLabel*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLabel'", NULL);
#endif
  {
   self->setLabel(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledColor of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_setDisabledColor00
static int tolua_nodes_wyMenuItemLabel_setDisabledColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledColor'", NULL);
#endif
  {
   self->setDisabledColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledColor of class  wyMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemLabel_getDisabledColor00
static int tolua_nodes_wyMenuItemLabel_getDisabledColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemLabel* self = (wyMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getDisabledColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_make00
static int tolua_nodes_wyMenuItemSprite_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wySprite* normal = ((wySprite*)  tolua_tousertype(tolua_S,4,0));
  wySprite* selected = ((wySprite*)  tolua_tousertype(tolua_S,5,0));
  wySprite* disabled = ((wySprite*)  tolua_tousertype(tolua_S,6,0));
  {
   wyMenuItemSprite* tolua_ret = (wyMenuItemSprite*)  wyMenuItemSprite::make(downSelector,upSelector,normal,selected,disabled);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_new00
static int tolua_nodes_wyMenuItemSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wySprite* normal = ((wySprite*)  tolua_tousertype(tolua_S,4,0));
  wySprite* selected = ((wySprite*)  tolua_tousertype(tolua_S,5,0));
  wySprite* disabled = ((wySprite*)  tolua_tousertype(tolua_S,6,0));
  {
   wyMenuItemSprite* tolua_ret = (wyMenuItemSprite*)  Mtolua_new((wyMenuItemSprite)(downSelector,upSelector,normal,selected,disabled));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_new00_local
static int tolua_nodes_wyMenuItemSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* downSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  wyTargetSelector* upSelector = ((wyTargetSelector*)  tolua_tousertype(tolua_S,3,0));
  wySprite* normal = ((wySprite*)  tolua_tousertype(tolua_S,4,0));
  wySprite* selected = ((wySprite*)  tolua_tousertype(tolua_S,5,0));
  wySprite* disabled = ((wySprite*)  tolua_tousertype(tolua_S,6,0));
  {
   wyMenuItemSprite* tolua_ret = (wyMenuItemSprite*)  Mtolua_new((wyMenuItemSprite)(downSelector,upSelector,normal,selected,disabled));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMenuItemSprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_delete00
static int tolua_nodes_wyMenuItemSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setRotation00
static int tolua_nodes_wyMenuItemSprite_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  float rot = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(rot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setScale00
static int tolua_nodes_wyMenuItemSprite_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setScaleX00
static int tolua_nodes_wyMenuItemSprite_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  float scaleX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(scaleX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setScaleY00
static int tolua_nodes_wyMenuItemSprite_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  float scaleY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(scaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_getAlpha00
static int tolua_nodes_wyMenuItemSprite_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setAlpha00
static int tolua_nodes_wyMenuItemSprite_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_getColor00
static int tolua_nodes_wyMenuItemSprite_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setColor00
static int tolua_nodes_wyMenuItemSprite_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setColor01
static int tolua_nodes_wyMenuItemSprite_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyMenuItemSprite_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setSelected00
static int tolua_nodes_wyMenuItemSprite_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setEnabled00
static int tolua_nodes_wyMenuItemSprite_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNormalSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setNormalSprite00
static int tolua_nodes_wyMenuItemSprite_setNormalSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  wySprite* normal = ((wySprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNormalSprite'", NULL);
#endif
  {
   self->setNormalSprite(normal);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNormalSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNormalSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_getNormalSprite00
static int tolua_nodes_wyMenuItemSprite_getNormalSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNormalSprite'", NULL);
#endif
  {
   wySprite* tolua_ret = (wySprite*)  self->getNormalSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNormalSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setSelectedSprite00
static int tolua_nodes_wyMenuItemSprite_setSelectedSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  wySprite* selected = ((wySprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedSprite'", NULL);
#endif
  {
   self->setSelectedSprite(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_getSelectedSprite00
static int tolua_nodes_wyMenuItemSprite_getSelectedSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedSprite'", NULL);
#endif
  {
   wySprite* tolua_ret = (wySprite*)  self->getSelectedSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_setDisabledSprite00
static int tolua_nodes_wyMenuItemSprite_setDisabledSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  wySprite* disabled = ((wySprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSprite'", NULL);
#endif
  {
   self->setDisabledSprite(disabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledSprite of class  wyMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemSprite_getDisabledSprite00
static int tolua_nodes_wyMenuItemSprite_getDisabledSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemSprite* self = (wyMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledSprite'", NULL);
#endif
  {
   wySprite* tolua_ret = (wySprite*)  self->getDisabledSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_delete00
static int tolua_nodes_wyMenuItemToggle_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setSelected00
static int tolua_nodes_wyMenuItemToggle_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setEnabled00
static int tolua_nodes_wyMenuItemToggle_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: beforeInvoke of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_beforeInvoke00
static int tolua_nodes_wyMenuItemToggle_beforeInvoke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beforeInvoke'", NULL);
#endif
  {
   self->beforeInvoke(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beforeInvoke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_getAlpha00
static int tolua_nodes_wyMenuItemToggle_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setAlpha00
static int tolua_nodes_wyMenuItemToggle_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_getColor00
static int tolua_nodes_wyMenuItemToggle_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setColor00
static int tolua_nodes_wyMenuItemToggle_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setColor01
static int tolua_nodes_wyMenuItemToggle_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyMenuItemToggle_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelectedIndex of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_setSelectedIndex00
static int tolua_nodes_wyMenuItemToggle_setSelectedIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelectedIndex'", NULL);
#endif
  {
   self->setSelectedIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelectedIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSelectedIndex of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_getSelectedIndex00
static int tolua_nodes_wyMenuItemToggle_getSelectedIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSelectedIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getSelectedIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSelectedIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMenuItems of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_getMenuItems00
static int tolua_nodes_wyMenuItemToggle_getMenuItems00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMenuItems'", NULL);
#endif
  {
   wyArray* tolua_ret = (wyArray*)  self->getMenuItems();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMenuItems'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addMenuItem of class  wyMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMenuItemToggle_addMenuItem00
static int tolua_nodes_wyMenuItemToggle_addMenuItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMenuItemToggle",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMenuItemToggle* self = (wyMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  wyMenuItem* item = ((wyMenuItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addMenuItem'", NULL);
#endif
  {
   self->addMenuItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMenuItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_make00
static int tolua_nodes_wyMotionStreak_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fade = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,4,0));
  wyMotionStreakStyle style = ((wyMotionStreakStyle) (int)  tolua_tonumber(tolua_S,5,MS_STYLE_STRIP));
  {
   wyMotionStreak* tolua_ret = (wyMotionStreak*)  wyMotionStreak::make(fade,tex,color,style);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMotionStreak");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_new00
static int tolua_nodes_wyMotionStreak_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fade = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,4,0));
  wyMotionStreakStyle style = ((wyMotionStreakStyle) (int)  tolua_tonumber(tolua_S,5,MS_STYLE_STRIP));
  {
   wyMotionStreak* tolua_ret = (wyMotionStreak*)  Mtolua_new((wyMotionStreak)(fade,tex,color,style));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMotionStreak");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_new00_local
static int tolua_nodes_wyMotionStreak_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fade = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,4,0));
  wyMotionStreakStyle style = ((wyMotionStreakStyle) (int)  tolua_tonumber(tolua_S,5,MS_STYLE_STRIP));
  {
   wyMotionStreak* tolua_ret = (wyMotionStreak*)  Mtolua_new((wyMotionStreak)(fade,tex,color,style));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMotionStreak");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_delete00
static int tolua_nodes_wyMotionStreak_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getTexture00
static int tolua_nodes_wyMotionStreak_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_setTexture00
static int tolua_nodes_wyMotionStreak_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRibbon of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getRibbon00
static int tolua_nodes_wyMotionStreak_getRibbon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRibbon'", NULL);
#endif
  {
   wyRibbon* tolua_ret = (wyRibbon*)  self->getRibbon();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRibbon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLastLocation of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getLastLocation00
static int tolua_nodes_wyMotionStreak_getLastLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLastLocation'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getLastLocation();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLastLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentLocation of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getCurrentLocation00
static int tolua_nodes_wyMotionStreak_getCurrentLocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentLocation'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getCurrentLocation();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPaused of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_setPaused00
static int tolua_nodes_wyMotionStreak_setPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPaused'", NULL);
#endif
  {
   self->setPaused(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPaused of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_isPaused00
static int tolua_nodes_wyMotionStreak_isPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPaused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPaused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_addPoint00
static int tolua_nodes_wyMotionStreak_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  bool newSegment = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(x,y,newSegment);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_reset00
static int tolua_nodes_wyMotionStreak_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStyle of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getStyle00
static int tolua_nodes_wyMotionStreak_getStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStyle'", NULL);
#endif
  {
   wyMotionStreakStyle tolua_ret = (wyMotionStreakStyle)  self->getStyle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSegmentThreshold of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_setSegmentThreshold00
static int tolua_nodes_wyMotionStreak_setSegmentThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
  float threshold = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSegmentThreshold'", NULL);
#endif
  {
   self->setSegmentThreshold(threshold);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSegmentThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSegmentThreshold of class  wyMotionStreak */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMotionStreak_getSegmentThreshold00
static int tolua_nodes_wyMotionStreak_getSegmentThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMotionStreak",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMotionStreak* self = (wyMotionStreak*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSegmentThreshold'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSegmentThreshold();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSegmentThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_make00
static int tolua_nodes_wyMultiplexLayer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMultiplexLayer* tolua_ret = (wyMultiplexLayer*)  wyMultiplexLayer::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMultiplexLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_new00
static int tolua_nodes_wyMultiplexLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMultiplexLayer* tolua_ret = (wyMultiplexLayer*)  Mtolua_new((wyMultiplexLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMultiplexLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_new00_local
static int tolua_nodes_wyMultiplexLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyMultiplexLayer* tolua_ret = (wyMultiplexLayer*)  Mtolua_new((wyMultiplexLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyMultiplexLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_delete00
static int tolua_nodes_wyMultiplexLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMultiplexLayer* self = (wyMultiplexLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addLayer of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_addLayer00
static int tolua_nodes_wyMultiplexLayer_addLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMultiplexLayer* self = (wyMultiplexLayer*)  tolua_tousertype(tolua_S,1,0);
  wyLayer* layer = ((wyLayer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addLayer'", NULL);
#endif
  {
   self->addLayer(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLayer of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_removeLayer00
static int tolua_nodes_wyMultiplexLayer_removeLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMultiplexLayer* self = (wyMultiplexLayer*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLayer'", NULL);
#endif
  {
   self->removeLayer(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchTo of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_switchTo00
static int tolua_nodes_wyMultiplexLayer_switchTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMultiplexLayer* self = (wyMultiplexLayer*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchTo'", NULL);
#endif
  {
   self->switchTo(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEnabledLayer of class  wyMultiplexLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyMultiplexLayer_getEnabledLayer00
static int tolua_nodes_wyMultiplexLayer_getEnabledLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyMultiplexLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyMultiplexLayer* self = (wyMultiplexLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEnabledLayer'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getEnabledLayer();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEnabledLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_make00
static int tolua_nodes_wyNinePatchSprite_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect patchRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wyNinePatchSprite* tolua_ret = (wyNinePatchSprite*)  wyNinePatchSprite::make(tex,patchRect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNinePatchSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_make01
static int tolua_nodes_wyNinePatchSprite_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect texRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  wyRect patchRect = *((wyRect*)  tolua_tousertype(tolua_S,4,0));
  {
   wyNinePatchSprite* tolua_ret = (wyNinePatchSprite*)  wyNinePatchSprite::make(tex,texRect,patchRect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNinePatchSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyNinePatchSprite_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_delete00
static int tolua_nodes_wyNinePatchSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_setContentSize00
static int tolua_nodes_wyNinePatchSprite_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_getTexture00
static int tolua_nodes_wyNinePatchSprite_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_setTexture00
static int tolua_nodes_wyNinePatchSprite_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_setTextureRect00
static int tolua_nodes_wyNinePatchSprite_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureRect of class  wyNinePatchSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNinePatchSprite_getTextureRect00
static int tolua_nodes_wyNinePatchSprite_getTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNinePatchSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNinePatchSprite* self = (wyNinePatchSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getTextureRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_make00
static int tolua_nodes_wyNode_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyNode* tolua_ret = (wyNode*)  wyNode::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onEnter00
static int tolua_nodes_wyNode_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onExit00
static int tolua_nodes_wyNode_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnterTransitionDidFinish of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onEnterTransitionDidFinish00
static int tolua_nodes_wyNode_onEnterTransitionDidFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnterTransitionDidFinish'", NULL);
#endif
  {
   self->onEnterTransitionDidFinish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnterTransitionDidFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAttachToParent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onAttachToParent00
static int tolua_nodes_wyNode_onAttachToParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* parent = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAttachToParent'", NULL);
#endif
  {
   self->onAttachToParent(parent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onAttachToParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDetachFromParent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onDetachFromParent00
static int tolua_nodes_wyNode_onDetachFromParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* parent = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDetachFromParent'", NULL);
#endif
  {
   self->onDetachFromParent(parent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDetachFromParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanup of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_cleanup00
static int tolua_nodes_wyNode_cleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanup'", NULL);
#endif
  {
   self->cleanup();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchor of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAnchor00
static int tolua_nodes_wyNode_setAnchor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchor'", NULL);
#endif
  {
   self->setAnchor(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAnchorX00
static int tolua_nodes_wyNode_setAnchorX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorX'", NULL);
#endif
  {
   self->setAnchorX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAnchorY00
static int tolua_nodes_wyNode_setAnchorY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorY'", NULL);
#endif
  {
   self->setAnchorY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setContentSize00
static int tolua_nodes_wyNode_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setPosition00
static int tolua_nodes_wyNode_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: translate of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_translate00
static int tolua_nodes_wyNode_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'translate'", NULL);
#endif
  {
   self->translate(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setRotation00
static int tolua_nodes_wyNode_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float rot = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(rot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setScale00
static int tolua_nodes_wyNode_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setScaleX00
static int tolua_nodes_wyNode_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float scaleX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(scaleX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setScaleY00
static int tolua_nodes_wyNode_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float scaleY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(scaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSelected of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setSelected00
static int tolua_nodes_wyNode_setSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool selected = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSelected'", NULL);
#endif
  {
   self->setSelected(selected);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVertexZ of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setVertexZ00
static int tolua_nodes_wyNode_setVertexZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float vertexZ = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertexZ'", NULL);
#endif
  {
   self->setVertexZ(vertexZ);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertexZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setVisible00
static int tolua_nodes_wyNode_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFocused of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setFocused00
static int tolua_nodes_wyNode_setFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool focused = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFocused'", NULL);
#endif
  {
   self->setFocused(focused);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setEnabled00
static int tolua_nodes_wyNode_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: accelerometerChanged of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_accelerometerChanged00
static int tolua_nodes_wyNode_accelerometerChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float accelX = ((float)  tolua_tonumber(tolua_S,2,0));
  float accelY = ((float)  tolua_tonumber(tolua_S,3,0));
  float accelZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'accelerometerChanged'", NULL);
#endif
  {
   self->accelerometerChanged(accelX,accelY,accelZ);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'accelerometerChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: keyDown of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_keyDown00
static int tolua_nodes_wyNode_keyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyKeyEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyKeyEvent* event = ((wyKeyEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'keyDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->keyDown(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'keyDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: keyUp of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_keyUp00
static int tolua_nodes_wyNode_keyUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyKeyEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyKeyEvent* event = ((wyKeyEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'keyUp'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->keyUp(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'keyUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: keyMultiple of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_keyMultiple00
static int tolua_nodes_wyNode_keyMultiple00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyKeyEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyKeyEvent* event = ((wyKeyEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'keyMultiple'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->keyMultiple(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'keyMultiple'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesBegan of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesBegan00
static int tolua_nodes_wyNode_touchesBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesBegan(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesMoved of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesMoved00
static int tolua_nodes_wyNode_touchesMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesMoved(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesEnded of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesEnded00
static int tolua_nodes_wyNode_touchesEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesEnded(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesCancelled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesCancelled00
static int tolua_nodes_wyNode_touchesCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesCancelled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesCancelled(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesPointerBegan of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesPointerBegan00
static int tolua_nodes_wyNode_touchesPointerBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesPointerBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesPointerBegan(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesPointerBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesPointerEnded of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_touchesPointerEnded00
static int tolua_nodes_wyNode_touchesPointerEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesPointerEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesPointerEnded(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesPointerEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDoubleTap of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onDoubleTap00
static int tolua_nodes_wyNode_onDoubleTap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDoubleTap'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onDoubleTap(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDoubleTap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDoubleTapEvent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onDoubleTapEvent00
static int tolua_nodes_wyNode_onDoubleTapEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDoubleTapEvent'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onDoubleTapEvent(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDoubleTapEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSingleTapConfirmed of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onSingleTapConfirmed00
static int tolua_nodes_wyNode_onSingleTapConfirmed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSingleTapConfirmed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onSingleTapConfirmed(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSingleTapConfirmed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onDown of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onDown00
static int tolua_nodes_wyNode_onDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onDown(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onFling of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onFling00
static int tolua_nodes_wyNode_onFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e1 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
  wyMotionEvent* e2 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,3,0));
  float velocityX = ((float)  tolua_tonumber(tolua_S,4,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onFling'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onFling(*e1,*e2,velocityX,velocityY);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onLongPress of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onLongPress00
static int tolua_nodes_wyNode_onLongPress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* event = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onLongPress'", NULL);
#endif
  {
   self->onLongPress(*event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onLongPress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onScroll of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onScroll00
static int tolua_nodes_wyNode_onScroll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e1 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
  wyMotionEvent* e2 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,3,0));
  float distanceX = ((float)  tolua_tonumber(tolua_S,4,0));
  float distanceY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onScroll'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onScroll(*e1,*e2,distanceX,distanceY);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onScroll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onShowPress of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onShowPress00
static int tolua_nodes_wyNode_onShowPress00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onShowPress'", NULL);
#endif
  {
   self->onShowPress(*e);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onShowPress'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onSingleTapUp of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_onSingleTapUp00
static int tolua_nodes_wyNode_onSingleTapUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onSingleTapUp'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onSingleTapUp(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onSingleTapUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hitTest of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_hitTest00
static int tolua_nodes_wyNode_hitTest00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hitTest'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hitTest(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hitTest'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRelativeAnchorPoint of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setRelativeAnchorPoint00
static int tolua_nodes_wyNode_setRelativeAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRelativeAnchorPoint'", NULL);
#endif
  {
   self->setRelativeAnchorPoint(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRelativeAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateNodeToParentTransform of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_updateNodeToParentTransform00
static int tolua_nodes_wyNode_updateNodeToParentTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateNodeToParentTransform'", NULL);
#endif
  {
   self->updateNodeToParentTransform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateNodeToParentTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateParentToNodeTransform of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_updateParentToNodeTransform00
static int tolua_nodes_wyNode_updateParentToNodeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateParentToNodeTransform'", NULL);
#endif
  {
   self->updateParentToNodeTransform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateParentToNodeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNodeToWorldTransform of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getNodeToWorldTransform00
static int tolua_nodes_wyNode_getNodeToWorldTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNodeToWorldTransform'", NULL);
#endif
  {
   wyAffineTransform tolua_ret = (wyAffineTransform)  self->getNodeToWorldTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNodeToWorldTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTransformMatrix of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getTransformMatrix00
static int tolua_nodes_wyNode_getTransformMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTransformMatrix'", NULL);
#endif
  {
   wyAffineTransform tolua_ret = (wyAffineTransform)  self->getTransformMatrix();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTransformMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWorldToNodeTransform of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getWorldToNodeTransform00
static int tolua_nodes_wyNode_getWorldToNodeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWorldToNodeTransform'", NULL);
#endif
  {
   wyAffineTransform tolua_ret = (wyAffineTransform)  self->getWorldToNodeTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"wyAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWorldToNodeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTransformDirty of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setTransformDirty00
static int tolua_nodes_wyNode_setTransformDirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTransformDirty'", NULL);
#endif
  {
   self->setTransformDirty();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTransformDirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getScale00
static int tolua_nodes_wyNode_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getScaleX00
static int tolua_nodes_wyNode_getScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getScaleY00
static int tolua_nodes_wyNode_getScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGrid of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setGrid00
static int tolua_nodes_wyNode_setGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyGridController",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyGridController* grid = ((wyGridController*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGrid'", NULL);
#endif
  {
   self->setGrid(grid);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChildLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_addChildLocked00
static int tolua_nodes_wyNode_addChildLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChildLocked'", NULL);
#endif
  {
   self->addChildLocked(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChildLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChildLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_addChildLocked01
static int tolua_nodes_wyNode_addChildLocked01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChildLocked'", NULL);
#endif
  {
   self->addChildLocked(child,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyNode_addChildLocked00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChildLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_addChildLocked02
static int tolua_nodes_wyNode_addChildLocked02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChildLocked'", NULL);
#endif
  {
   self->addChildLocked(child,z,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyNode_addChildLocked01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_addChild00
static int tolua_nodes_wyNode_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reorderChild of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_reorderChild00
static int tolua_nodes_wyNode_reorderChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reorderChild'", NULL);
#endif
  {
   int tolua_ret = (int)  self->reorderChild(child,z);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reorderChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_removeAllChildrenLocked00
static int tolua_nodes_wyNode_removeAllChildrenLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenLocked'", NULL);
#endif
  {
   self->removeAllChildrenLocked(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_removeAllChildren00
static int tolua_nodes_wyNode_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChildLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_removeChildLocked00
static int tolua_nodes_wyNode_removeChildLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildLocked'", NULL);
#endif
  {
   self->removeChildLocked(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChildLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChildByTagLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_removeChildByTagLocked00
static int tolua_nodes_wyNode_removeChildByTagLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildByTagLocked'", NULL);
#endif
  {
   self->removeChildByTagLocked(tag,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChildByTagLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_removeChild00
static int tolua_nodes_wyNode_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reorderChildLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_reorderChildLocked00
static int tolua_nodes_wyNode_reorderChildLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reorderChildLocked'", NULL);
#endif
  {
   int tolua_ret = (int)  self->reorderChildLocked(child,z);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reorderChildLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bringToFront of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_bringToFront00
static int tolua_nodes_wyNode_bringToFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bringToFront'", NULL);
#endif
  {
   self->bringToFront(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bringToFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bringToFrontLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_bringToFrontLocked00
static int tolua_nodes_wyNode_bringToFrontLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bringToFrontLocked'", NULL);
#endif
  {
   self->bringToFrontLocked(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bringToFrontLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bringToBack of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_bringToBack00
static int tolua_nodes_wyNode_bringToBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bringToBack'", NULL);
#endif
  {
   self->bringToBack(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bringToBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bringToBackLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_bringToBackLocked00
static int tolua_nodes_wyNode_bringToBackLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bringToBackLocked'", NULL);
#endif
  {
   self->bringToBackLocked(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bringToBackLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTagLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getChildByTagLocked00
static int tolua_nodes_wyNode_getChildByTagLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTagLocked'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getChildByTagLocked(tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTagLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTag of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getChildByTag00
static int tolua_nodes_wyNode_getChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTag'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getChildByTag(tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFirstChild of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getFirstChild00
static int tolua_nodes_wyNode_getFirstChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFirstChild'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getFirstChild();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFirstChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocity of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setVelocity00
static int tolua_nodes_wyNode_setVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
  float vy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocity'", NULL);
#endif
  {
   self->setVelocity(vx,vy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAcceleration of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAcceleration00
static int tolua_nodes_wyNode_setAcceleration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float ax = ((float)  tolua_tonumber(tolua_S,2,0));
  float ay = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAcceleration'", NULL);
#endif
  {
   self->setAcceleration(ax,ay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAcceleration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClipRect of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setClipRect00
static int tolua_nodes_wyNode_setClipRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyRect clip = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
  bool relativeToSelf = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClipRect'", NULL);
#endif
  {
   self->setClipRect(clip,relativeToSelf);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClipRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClipRect of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getClipRect00
static int tolua_nodes_wyNode_getClipRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClipRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getClipRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClipRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccelerationX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAccelerationX00
static int tolua_nodes_wyNode_setAccelerationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float ax = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccelerationX'", NULL);
#endif
  {
   self->setAccelerationX(ax);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccelerationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccelerationY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAccelerationY00
static int tolua_nodes_wyNode_setAccelerationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float ay = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccelerationY'", NULL);
#endif
  {
   self->setAccelerationY(ay);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccelerationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocityX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setVelocityX00
static int tolua_nodes_wyNode_setVelocityX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float vx = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocityX'", NULL);
#endif
  {
   self->setVelocityX(vx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVelocityX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocityY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setVelocityY00
static int tolua_nodes_wyNode_setVelocityY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float vy = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocityY'", NULL);
#endif
  {
   self->setVelocityY(vy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVelocityY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAbsolutePosition of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAbsolutePosition00
static int tolua_nodes_wyNode_getAbsolutePosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAbsolutePosition'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getAbsolutePosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAbsolutePosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: runAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_runAction00
static int tolua_nodes_wyNode_runAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyAction* action = ((wyAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'runAction'", NULL);
#endif
  {
   self->runAction(action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_stopAction00
static int tolua_nodes_wyNode_stopAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAction'", NULL);
#endif
  {
   self->stopAction(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAllActions of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_stopAllActions00
static int tolua_nodes_wyNode_stopAllActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAllActions'", NULL);
#endif
  {
   self->stopAllActions(includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAllActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseAllActions of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_pauseAllActions00
static int tolua_nodes_wyNode_pauseAllActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseAllActions'", NULL);
#endif
  {
   self->pauseAllActions(includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseAllActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeAllActions of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_resumeAllActions00
static int tolua_nodes_wyNode_resumeAllActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeAllActions'", NULL);
#endif
  {
   self->resumeAllActions(includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeAllActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_pauseAction00
static int tolua_nodes_wyNode_pauseAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseAction'", NULL);
#endif
  {
   self->pauseAction(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_resumeAction00
static int tolua_nodes_wyNode_resumeAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeAction'", NULL);
#endif
  {
   self->resumeAction(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAction00
static int tolua_nodes_wyNode_getAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAction'", NULL);
#endif
  {
   wyAction* tolua_ret = (wyAction*)  self->getAction(tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasRunningAction of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_hasRunningAction00
static int tolua_nodes_wyNode_hasRunningAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasRunningAction'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasRunningAction();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasRunningAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: worldToNodeSpace of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_worldToNodeSpace00
static int tolua_nodes_wyNode_worldToNodeSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'worldToNodeSpace'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->worldToNodeSpace(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'worldToNodeSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: worldToNodeSpaceAR of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_worldToNodeSpaceAR00
static int tolua_nodes_wyNode_worldToNodeSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'worldToNodeSpaceAR'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->worldToNodeSpaceAR(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'worldToNodeSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToWorldSpace of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_nodeToWorldSpace00
static int tolua_nodes_wyNode_nodeToWorldSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToWorldSpace'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->nodeToWorldSpace(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToWorldSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToWorldSpaceAR of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_nodeToWorldSpaceAR00
static int tolua_nodes_wyNode_nodeToWorldSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToWorldSpaceAR'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->nodeToWorldSpaceAR(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToWorldSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parentToNodeSpace of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_parentToNodeSpace00
static int tolua_nodes_wyNode_parentToNodeSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parentToNodeSpace'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->parentToNodeSpace(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parentToNodeSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parentToNodeSpaceAR of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_parentToNodeSpaceAR00
static int tolua_nodes_wyNode_parentToNodeSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parentToNodeSpaceAR'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->parentToNodeSpaceAR(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parentToNodeSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToParentSpace of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_nodeToParentSpace00
static int tolua_nodes_wyNode_nodeToParentSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToParentSpace'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->nodeToParentSpace(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToParentSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToParentSpaceAR of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_nodeToParentSpaceAR00
static int tolua_nodes_wyNode_nodeToParentSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToParentSpaceAR'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->nodeToParentSpaceAR(p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToParentSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getBoundingBox00
static int tolua_nodes_wyNode_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getBoundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBoxRelativeToParent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getBoundingBoxRelativeToParent00
static int tolua_nodes_wyNode_getBoundingBoxRelativeToParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBoxRelativeToParent'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getBoundingBoxRelativeToParent();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBoxRelativeToParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBoxRelativeToWorld of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getBoundingBoxRelativeToWorld00
static int tolua_nodes_wyNode_getBoundingBoxRelativeToWorld00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBoxRelativeToWorld'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getBoundingBoxRelativeToWorld();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBoxRelativeToWorld'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccelerometerEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAccelerometerEnabled00
static int tolua_nodes_wyNode_setAccelerometerEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccelerometerEnabled'", NULL);
#endif
  {
   self->setAccelerometerEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccelerometerEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setKeyEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setKeyEnabled00
static int tolua_nodes_wyNode_setKeyEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setKeyEnabled'", NULL);
#endif
  {
   self->setKeyEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setKeyEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setTouchEnabled00
static int tolua_nodes_wyNode_setTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchEnabled'", NULL);
#endif
  {
   self->setTouchEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDoubleTapEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setDoubleTapEnabled00
static int tolua_nodes_wyNode_setDoubleTapEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDoubleTapEnabled'", NULL);
#endif
  {
   self->setDoubleTapEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDoubleTapEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGestureEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setGestureEnabled00
static int tolua_nodes_wyNode_setGestureEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGestureEnabled'", NULL);
#endif
  {
   self->setGestureEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGestureEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTouchEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isTouchEnabled00
static int tolua_nodes_wyNode_isTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isKeyEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isKeyEnabled00
static int tolua_nodes_wyNode_isKeyEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isKeyEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isKeyEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isKeyEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAccelerometerEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isAccelerometerEnabled00
static int tolua_nodes_wyNode_isAccelerometerEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAccelerometerEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAccelerometerEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAccelerometerEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isGestureEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isGestureEnabled00
static int tolua_nodes_wyNode_isGestureEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isGestureEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isGestureEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isGestureEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDoubleTabEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isDoubleTabEnabled00
static int tolua_nodes_wyNode_isDoubleTabEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDoubleTabEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDoubleTabEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDoubleTabEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorPointX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAnchorPointX00
static int tolua_nodes_wyNode_getAnchorPointX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorPointX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorPointX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorPointX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAnchorY00
static int tolua_nodes_wyNode_getAnchorY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAnchorX00
static int tolua_nodes_wyNode_getAnchorX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAnchorY01
static int tolua_nodes_wyNode_getAnchorY01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAnchorY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyNode_getAnchorY00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCamera of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getCamera00
static int tolua_nodes_wyNode_getCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCamera'", NULL);
#endif
  {
   wyCamera* tolua_ret = (wyCamera*)  self->getCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyCamera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasCamera of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_hasCamera00
static int tolua_nodes_wyNode_hasCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasCamera'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasCamera();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGrid of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getGrid00
static int tolua_nodes_wyNode_getGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGrid'", NULL);
#endif
  {
   wyGridController* tolua_ret = (wyGridController*)  self->getGrid();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyGridController");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVisible of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isVisible00
static int tolua_nodes_wyNode_isVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFocused of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isFocused00
static int tolua_nodes_wyNode_isFocused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFocused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFocused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFocused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVisibleFromRoot of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isVisibleFromRoot00
static int tolua_nodes_wyNode_isVisibleFromRoot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVisibleFromRoot'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVisibleFromRoot();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVisibleFromRoot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSelected of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isSelected00
static int tolua_nodes_wyNode_isSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSelected'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSelected();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabled of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isEnabled00
static int tolua_nodes_wyNode_isEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEnabledFromRoot of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isEnabledFromRoot00
static int tolua_nodes_wyNode_isEnabledFromRoot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEnabledFromRoot'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEnabledFromRoot();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEnabledFromRoot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVertexZ of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getVertexZ00
static int tolua_nodes_wyNode_getVertexZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVertexZ'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVertexZ();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVertexZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getRotation00
static int tolua_nodes_wyNode_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getPositionX00
static int tolua_nodes_wyNode_getPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPositionX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getPositionY00
static int tolua_nodes_wyNode_getPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPositionY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOriginX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getOriginX00
static int tolua_nodes_wyNode_getOriginX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOriginX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getOriginX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOriginX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOriginY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getOriginY00
static int tolua_nodes_wyNode_getOriginY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOriginY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getOriginY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOriginY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRelativeAnchorPoint of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isRelativeAnchorPoint00
static int tolua_nodes_wyNode_isRelativeAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRelativeAnchorPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRelativeAnchorPoint();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRelativeAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRunning of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isRunning00
static int tolua_nodes_wyNode_isRunning00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRunning'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRunning();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRunning'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWidth of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getWidth00
static int tolua_nodes_wyNode_getWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHeight of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getHeight00
static int tolua_nodes_wyNode_getHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHeight'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocityX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getVelocityX00
static int tolua_nodes_wyNode_getVelocityX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocityX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getVelocityX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocityX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocityY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getVelocityY00
static int tolua_nodes_wyNode_getVelocityY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocityY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getVelocityY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocityY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocity of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getVelocity00
static int tolua_nodes_wyNode_getVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocity'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getVelocity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAccelerationX of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAccelerationX00
static int tolua_nodes_wyNode_getAccelerationX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAccelerationX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAccelerationX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAccelerationX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAccelerationY of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAccelerationY00
static int tolua_nodes_wyNode_getAccelerationY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAccelerationY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAccelerationY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAccelerationY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAcceleration of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAcceleration00
static int tolua_nodes_wyNode_getAcceleration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAcceleration'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getAcceleration();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAcceleration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getContentSize00
static int tolua_nodes_wyNode_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   wySize tolua_ret = (wySize)  self->getContentSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wySize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wySize));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getChildren00
static int tolua_nodes_wyNode_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   wyArray* tolua_ret = (wyArray*)  self->getChildren();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildAt of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getChildAt00
static int tolua_nodes_wyNode_getChildAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildAt'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getChildAt(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildCount of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getChildCount00
static int tolua_nodes_wyNode_getChildCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getChildCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getParent00
static int tolua_nodes_wyNode_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParent'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getParent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setParent00
static int tolua_nodes_wyNode_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* p = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTag of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setTag00
static int tolua_nodes_wyNode_setTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTag'", NULL);
#endif
  {
   self->setTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTag of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getTag00
static int tolua_nodes_wyNode_getTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZOrder of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setZOrder00
static int tolua_nodes_wyNode_setZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int z = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrder'", NULL);
#endif
  {
   self->setZOrder(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getZOrder00
static int tolua_nodes_wyNode_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scheduleLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_scheduleLocked00
static int tolua_nodes_wyNode_scheduleLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTimer* t = ((wyTimer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scheduleLocked'", NULL);
#endif
  {
   self->scheduleLocked(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scheduleLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unscheduleLocked of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_unscheduleLocked00
static int tolua_nodes_wyNode_unscheduleLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTimer* t = ((wyTimer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unscheduleLocked'", NULL);
#endif
  {
   self->unscheduleLocked(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unscheduleLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNoDraw of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isNoDraw00
static int tolua_nodes_wyNode_isNoDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNoDraw'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNoDraw();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNoDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNoDraw of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setNoDraw00
static int tolua_nodes_wyNode_setNoDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNoDraw'", NULL);
#endif
  {
   self->setNoDraw(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNoDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDownSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setDownSelector00
static int tolua_nodes_wyNode_setDownSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDownSelector'", NULL);
#endif
  {
   self->setDownSelector(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDownSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDownSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getDownSelector00
static int tolua_nodes_wyNode_getDownSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDownSelector'", NULL);
#endif
  {
   wyTargetSelector* tolua_ret = (wyTargetSelector*)  self->getDownSelector();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTargetSelector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDownSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setUpSelector00
static int tolua_nodes_wyNode_setUpSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpSelector'", NULL);
#endif
  {
   self->setUpSelector(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUpSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getUpSelector00
static int tolua_nodes_wyNode_getUpSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUpSelector'", NULL);
#endif
  {
   wyTargetSelector* tolua_ret = (wyTargetSelector*)  self->getUpSelector();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTargetSelector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUpSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMoveOutSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setMoveOutSelector00
static int tolua_nodes_wyNode_setMoveOutSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMoveOutSelector'", NULL);
#endif
  {
   self->setMoveOutSelector(ts);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMoveOutSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMoveOutSelector of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getMoveOutSelector00
static int tolua_nodes_wyNode_getMoveOutSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMoveOutSelector'", NULL);
#endif
  {
   wyTargetSelector* tolua_ret = (wyTargetSelector*)  self->getMoveOutSelector();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTargetSelector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMoveOutSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAnimation of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_addAnimation00
static int tolua_nodes_wyNode_addAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyAnimation* animation = ((wyAnimation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAnimation'", NULL);
#endif
  {
   self->addAnimation(animation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimationById of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAnimationById00
static int tolua_nodes_wyNode_getAnimationById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationById'", NULL);
#endif
  {
   wyAnimation* tolua_ret = (wyAnimation*)  self->getAnimationById(id);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayFrame of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getDisplayFrame00
static int tolua_nodes_wyNode_getDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayFrame'", NULL);
#endif
  {
   wyFrame* tolua_ret = (wyFrame*)  self->getDisplayFrame();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFrameDisplayed of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isFrameDisplayed00
static int tolua_nodes_wyNode_isFrameDisplayed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyFrame* frame = ((wyFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFrameDisplayed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFrameDisplayed(frame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFrameDisplayed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrame of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setDisplayFrame00
static int tolua_nodes_wyNode_setDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyFrame* newFrame = ((wyFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrame'", NULL);
#endif
  {
   self->setDisplayFrame(newFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrameById of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setDisplayFrameById00
static int tolua_nodes_wyNode_setDisplayFrameById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
  int frameIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrameById'", NULL);
#endif
  {
   self->setDisplayFrameById(id,frameIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrameById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getText00
static int tolua_nodes_wyNode_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setText00
static int tolua_nodes_wyNode_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAlpha00
static int tolua_nodes_wyNode_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAlpha00
static int tolua_nodes_wyNode_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getColor00
static int tolua_nodes_wyNode_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setColor00
static int tolua_nodes_wyNode_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setColor01
static int tolua_nodes_wyNode_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyNode_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getTexture00
static int tolua_nodes_wyNode_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setTexture00
static int tolua_nodes_wyNode_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sizeToFit of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_sizeToFit00
static int tolua_nodes_wyNode_sizeToFit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sizeToFit'", NULL);
#endif
  {
   self->sizeToFit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sizeToFit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: enlargeNode of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_enlargeNode00
static int tolua_nodes_wyNode_enlargeNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  float left = ((float)  tolua_tonumber(tolua_S,2,0));
  float top = ((float)  tolua_tonumber(tolua_S,3,0));
  float right = ((float)  tolua_tonumber(tolua_S,4,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'enlargeNode'", NULL);
#endif
  {
   self->enlargeNode(left,top,right,bottom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'enlargeNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: javaRelease of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_javaRelease00
static int tolua_nodes_wyNode_javaRelease00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool includeChildren = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'javaRelease'", NULL);
#endif
  {
   self->javaRelease(includeChildren);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'javaRelease'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setTouchPriority00
static int tolua_nodes_wyNode_setTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int p = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchPriority'", NULL);
#endif
  {
   self->setTouchPriority(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setKeyPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setKeyPriority00
static int tolua_nodes_wyNode_setKeyPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int p = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setKeyPriority'", NULL);
#endif
  {
   self->setKeyPriority(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setKeyPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGesturePriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setGesturePriority00
static int tolua_nodes_wyNode_setGesturePriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int p = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGesturePriority'", NULL);
#endif
  {
   self->setGesturePriority(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGesturePriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDoubleTapPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setDoubleTapPriority00
static int tolua_nodes_wyNode_setDoubleTapPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int p = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDoubleTapPriority'", NULL);
#endif
  {
   self->setDoubleTapPriority(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDoubleTapPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccelerometerPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setAccelerometerPriority00
static int tolua_nodes_wyNode_setAccelerometerPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  int p = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccelerometerPriority'", NULL);
#endif
  {
   self->setAccelerometerPriority(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccelerometerPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTouchPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getTouchPriority00
static int tolua_nodes_wyNode_getTouchPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTouchPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTouchPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTouchPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getKeyPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getKeyPriority00
static int tolua_nodes_wyNode_getKeyPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getKeyPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getKeyPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getKeyPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGesturePriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getGesturePriority00
static int tolua_nodes_wyNode_getGesturePriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGesturePriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getGesturePriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGesturePriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDoubleTapPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getDoubleTapPriority00
static int tolua_nodes_wyNode_getDoubleTapPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDoubleTapPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getDoubleTapPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDoubleTapPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAccelerometerPriority of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_getAccelerometerPriority00
static int tolua_nodes_wyNode_getAccelerometerPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAccelerometerPriority'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAccelerometerPriority();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAccelerometerPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionCallback of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setPositionCallback00
static int tolua_nodes_wyNode_setPositionCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNodePositionCallback",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNodePositionCallback* cb = ((wyNodePositionCallback*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionCallback'", NULL);
#endif
  {
   self->setPositionCallback(cb);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAncestor of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isAncestor00
static int tolua_nodes_wyNode_isAncestor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* node = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAncestor'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAncestor(node);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAncestor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMultiTouchClickable of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_setMultiTouchClickable00
static int tolua_nodes_wyNode_setMultiTouchClickable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMultiTouchClickable'", NULL);
#endif
  {
   self->setMultiTouchClickable(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMultiTouchClickable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isMultiTouchClickable of class  wyNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyNode_isMultiTouchClickable00
static int tolua_nodes_wyNode_isMultiTouchClickable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* self = (wyNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isMultiTouchClickable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isMultiTouchClickable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isMultiTouchClickable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_make00
static int tolua_nodes_wyParallaxNode_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyParallaxNode* tolua_ret = (wyParallaxNode*)  wyParallaxNode::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyParallaxNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_new00
static int tolua_nodes_wyParallaxNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyParallaxNode* tolua_ret = (wyParallaxNode*)  Mtolua_new((wyParallaxNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyParallaxNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_new00_local
static int tolua_nodes_wyParallaxNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyParallaxNode* tolua_ret = (wyParallaxNode*)  Mtolua_new((wyParallaxNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyParallaxNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_delete00
static int tolua_nodes_wyParallaxNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_addChild00
static int tolua_nodes_wyParallaxNode_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildren of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_removeAllChildren00
static int tolua_nodes_wyParallaxNode_removeAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildren'", NULL);
#endif
  {
   self->removeAllChildren(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_removeChild00
static int tolua_nodes_wyParallaxNode_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: offsetBy of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_offsetBy00
static int tolua_nodes_wyParallaxNode_offsetBy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  float dx = ((float)  tolua_tonumber(tolua_S,2,0));
  float dy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'offsetBy'", NULL);
#endif
  {
   self->offsetBy(dx,dy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'offsetBy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_addChild01
static int tolua_nodes_wyParallaxNode_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  float ratioX = ((float)  tolua_tonumber(tolua_S,4,0));
  float ratioY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,ratioX,ratioY);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyParallaxNode_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: fling of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_fling00
static int tolua_nodes_wyParallaxNode_fling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  float velocityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fling'", NULL);
#endif
  {
   self->fling(velocityX,velocityY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopFling of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_stopFling00
static int tolua_nodes_wyParallaxNode_stopFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopFling'", NULL);
#endif
  {
   self->stopFling();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffsetX of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getOffsetX00
static int tolua_nodes_wyParallaxNode_getOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getOffsetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffsetY of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getOffsetY00
static int tolua_nodes_wyParallaxNode_getOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getOffsetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinX of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_setMinX00
static int tolua_nodes_wyParallaxNode_setMinX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinX'", NULL);
#endif
  {
   self->setMinX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinY of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_setMinY00
static int tolua_nodes_wyParallaxNode_setMinY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinY'", NULL);
#endif
  {
   self->setMinY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinX of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getMinX00
static int tolua_nodes_wyParallaxNode_getMinX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getMinX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinY of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getMinY00
static int tolua_nodes_wyParallaxNode_getMinY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getMinY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxX of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_setMaxX00
static int tolua_nodes_wyParallaxNode_setMaxX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxX'", NULL);
#endif
  {
   self->setMaxX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxY of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_setMaxY00
static int tolua_nodes_wyParallaxNode_setMaxY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxY'", NULL);
#endif
  {
   self->setMaxY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxX of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getMaxX00
static int tolua_nodes_wyParallaxNode_getMaxX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxY of class  wyParallaxNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyParallaxNode_getMaxY00
static int tolua_nodes_wyParallaxNode_getMaxY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyParallaxNode* self = (wyParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_make00
static int tolua_nodes_wyProgressTimer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wyProgressTimer* tolua_ret = (wyProgressTimer*)  wyProgressTimer::make(tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyProgressTimer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_make01
static int tolua_nodes_wyProgressTimer_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wySprite* sprite = ((wySprite*)  tolua_tousertype(tolua_S,2,0));
  {
   wyProgressTimer* tolua_ret = (wyProgressTimer*)  wyProgressTimer::make(sprite);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyProgressTimer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyProgressTimer_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_delete00
static int tolua_nodes_wyProgressTimer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPercentage of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_setPercentage00
static int tolua_nodes_wyProgressTimer_setPercentage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
  float percentage = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPercentage'", NULL);
#endif
  {
   self->setPercentage(percentage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPercentage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPercentage of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_getPercentage00
static int tolua_nodes_wyProgressTimer_getPercentage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPercentage'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPercentage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPercentage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: increase of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_increase00
static int tolua_nodes_wyProgressTimer_increase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'increase'", NULL);
#endif
  {
   self->increase(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'increase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSprite of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_setSprite00
static int tolua_nodes_wyProgressTimer_setSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
  wySprite* sprite = ((wySprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSprite'", NULL);
#endif
  {
   self->setSprite(sprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStyle of class  wyProgressTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyProgressTimer_setStyle00
static int tolua_nodes_wyProgressTimer_setStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyProgressTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyProgressTimer* self = (wyProgressTimer*)  tolua_tousertype(tolua_S,1,0);
  wyProgress::Style style = ((wyProgress::Style) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStyle'", NULL);
#endif
  {
   self->setStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_make00
static int tolua_nodes_wyRenderTexture_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   wyRenderTexture* tolua_ret = (wyRenderTexture*)  wyRenderTexture::make(width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyRenderTexture");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_make01
static int tolua_nodes_wyRenderTexture_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   wyRenderTexture* tolua_ret = (wyRenderTexture*)  wyRenderTexture::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyRenderTexture");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyRenderTexture_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_delete00
static int tolua_nodes_wyRenderTexture_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_getAlpha00
static int tolua_nodes_wyRenderTexture_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_setAlpha00
static int tolua_nodes_wyRenderTexture_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_getColor00
static int tolua_nodes_wyRenderTexture_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_setColor00
static int tolua_nodes_wyRenderTexture_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_setColor01
static int tolua_nodes_wyRenderTexture_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyRenderTexture_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: beginRender of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_beginRender00
static int tolua_nodes_wyRenderTexture_beginRender00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'beginRender'", NULL);
#endif
  {
   self->beginRender();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beginRender'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: endRender of class  wyRenderTexture */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRenderTexture_endRender00
static int tolua_nodes_wyRenderTexture_endRender00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRenderTexture",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRenderTexture* self = (wyRenderTexture*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'endRender'", NULL);
#endif
  {
   self->endRender();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endRender'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_delete00
static int tolua_nodes_wyRibbon_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_setContentSize00
static int tolua_nodes_wyRibbon_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: forceFirstPoint of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_forceFirstPoint00
static int tolua_nodes_wyRibbon_forceFirstPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'forceFirstPoint'", NULL);
#endif
  {
   self->forceFirstPoint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'forceFirstPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_update00
static int tolua_nodes_wyRibbon_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_addPoint00
static int tolua_nodes_wyRibbon_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyPoint location = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(location);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wyRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyRibbon_reset00
static int tolua_nodes_wyRibbon_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyRibbon* self = (wyRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_make00
static int tolua_nodes_wyScene_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyScene* tolua_ret = (wyScene*)  wyScene::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_new00
static int tolua_nodes_wyScene_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyScene* tolua_ret = (wyScene*)  Mtolua_new((wyScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_new00_local
static int tolua_nodes_wyScene_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyScene* tolua_ret = (wyScene*)  Mtolua_new((wyScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScene");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_delete00
static int tolua_nodes_wyScene_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScene* self = (wyScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: keyDown of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_keyDown00
static int tolua_nodes_wyScene_keyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyKeyEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScene* self = (wyScene*)  tolua_tousertype(tolua_S,1,0);
  wyKeyEvent* event = ((wyKeyEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'keyDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->keyDown(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'keyDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: keyUp of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_keyUp00
static int tolua_nodes_wyScene_keyUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyKeyEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScene* self = (wyScene*)  tolua_tousertype(tolua_S,1,0);
  wyKeyEvent* event = ((wyKeyEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'keyUp'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->keyUp(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'keyUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTransition of class  wyScene */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScene_isTransition00
static int tolua_nodes_wyScene_isTransition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScene* self = (wyScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTransition'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTransition();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTransition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: wyTimerEquals */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimerEquals00
static int tolua_nodes_wyTimerEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  void* ptr1 = ((void*)  tolua_touserdata(tolua_S,1,0));
  void* ptr2 = ((void*)  tolua_touserdata(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  wyTimerEquals(ptr1,ptr2,data);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'wyTimerEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_getInstance00
static int tolua_nodes_wyScheduler_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyScheduler* tolua_ret = (wyScheduler*)  wyScheduler::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScheduler");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_delete00
static int tolua_nodes_wyScheduler_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScheduler* self = (wyScheduler*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scheduleLocked of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_scheduleLocked00
static int tolua_nodes_wyScheduler_scheduleLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScheduler* self = (wyScheduler*)  tolua_tousertype(tolua_S,1,0);
  wyTimer* t = ((wyTimer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scheduleLocked'", NULL);
#endif
  {
   self->scheduleLocked(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scheduleLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unscheduleLocked of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_unscheduleLocked00
static int tolua_nodes_wyScheduler_unscheduleLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScheduler* self = (wyScheduler*)  tolua_tousertype(tolua_S,1,0);
  wyTimer* t = ((wyTimer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unscheduleLocked'", NULL);
#endif
  {
   self->unscheduleLocked(t);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unscheduleLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimeScale of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_setTimeScale00
static int tolua_nodes_wyScheduler_setTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScheduler* self = (wyScheduler*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimeScale'", NULL);
#endif
  {
   self->setTimeScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimeScale of class  wyScheduler */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScheduler_getTimeScale00
static int tolua_nodes_wyScheduler_getTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScheduler",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScheduler* self = (wyScheduler*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimeScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_make00
static int tolua_nodes_wyTimer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  wyTimer::make(ts);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_make01
static int tolua_nodes_wyTimer_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  float interval = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  wyTimer::make(ts,interval);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_make02
static int tolua_nodes_wyTimer_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  int frame = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  wyTimer::make(ts,frame);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new00
static int tolua_nodes_wyTimer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new00_local
static int tolua_nodes_wyTimer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new01
static int tolua_nodes_wyTimer_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  float interval = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts,interval));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new01_local
static int tolua_nodes_wyTimer_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  float interval = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts,interval));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new02
static int tolua_nodes_wyTimer_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  int frame = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts,frame));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_new02_local
static int tolua_nodes_wyTimer_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTargetSelector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTargetSelector* ts = ((wyTargetSelector*)  tolua_tousertype(tolua_S,2,0));
  int frame = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   wyTimer* tolua_ret = (wyTimer*)  Mtolua_new((wyTimer)(ts,frame));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTimer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyTimer_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_delete00
static int tolua_nodes_wyTimer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInterval of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_setInterval00
static int tolua_nodes_wyTimer_setInterval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
  float interval = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInterval'", NULL);
#endif
  {
   self->setInterval(interval);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInterval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInterval of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getInterval00
static int tolua_nodes_wyTimer_getInterval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInterval'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getInterval();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInterval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrame of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_setFrame00
static int tolua_nodes_wyTimer_setFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
  int frame = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrame'", NULL);
#endif
  {
   self->setFrame(frame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFrame of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getFrame00
static int tolua_nodes_wyTimer_getFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFrame'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getFrame();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fire of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_fire00
static int tolua_nodes_wyTimer_fire00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fire'", NULL);
#endif
  {
   self->fire(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fire'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOneShot of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_setOneShot00
static int tolua_nodes_wyTimer_setOneShot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOneShot'", NULL);
#endif
  {
   self->setOneShot(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOneShot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isOneShot of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_isOneShot00
static int tolua_nodes_wyTimer_isOneShot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isOneShot'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isOneShot();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isOneShot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxInvocation of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_setMaxInvocation00
static int tolua_nodes_wyTimer_setMaxInvocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
  int max = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxInvocation'", NULL);
#endif
  {
   self->setMaxInvocation(max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxInvocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxInvocation of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getMaxInvocation00
static int tolua_nodes_wyTimer_getMaxInvocation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxInvocation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxInvocation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxInvocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentInvocationCount of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getCurrentInvocationCount00
static int tolua_nodes_wyTimer_getCurrentInvocationCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentInvocationCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCurrentInvocationCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentInvocationCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElapsed of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getElapsed00
static int tolua_nodes_wyTimer_getElapsed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElapsed'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getElapsed();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElapsed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTargetSelector of class  wyTimer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTimer_getTargetSelector00
static int tolua_nodes_wyTimer_getTargetSelector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTimer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTimer* self = (wyTimer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTargetSelector'", NULL);
#endif
  {
   wyTargetSelector* tolua_ret = (wyTargetSelector*)  self->getTargetSelector();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTargetSelector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTargetSelector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_make00
static int tolua_nodes_wySprite_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySprite* tolua_ret = (wySprite*)  wySprite::make(tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_make01
static int tolua_nodes_wySprite_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect texRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  wySprite::make(tex,texRect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_make02
static int tolua_nodes_wySprite_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  wySprite::make(tex,f);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new00
static int tolua_nodes_wySprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new00_local
static int tolua_nodes_wySprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new01
static int tolua_nodes_wySprite_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect texRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex,texRect));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new01_local
static int tolua_nodes_wySprite_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect texRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex,texRect));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new02
static int tolua_nodes_wySprite_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_new02_local
static int tolua_nodes_wySprite_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySprite* tolua_ret = (wySprite*)  Mtolua_new((wySprite)(tex,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySprite_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wySprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wySprite_delete00
static int tolua_nodes_wySprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySprite* self = (wySprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_make00
static int tolua_nodes_wySpriteEx_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  wySpriteEx::make(pTex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_make01
static int tolua_nodes_wySpriteEx_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  wySpriteEx::make(pTex,r);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_make02
static int tolua_nodes_wySpriteEx_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  wySpriteEx::make(pTex,f);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_make03
static int tolua_nodes_wySpriteEx_make03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySpriteBatchNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wySpriteBatchNode* pBatchNode = ((wySpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  wySpriteEx::make(pBatchNode,r,zOrder);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_make02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_make04
static int tolua_nodes_wySpriteEx_make04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wySpriteBatchNode* pBatchNode = ((wySpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  wySpriteEx::make(pBatchNode,f,zOrder);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_make03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new00
static int tolua_nodes_wySpriteEx_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new00_local
static int tolua_nodes_wySpriteEx_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new01
static int tolua_nodes_wySpriteEx_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new01_local
static int tolua_nodes_wySpriteEx_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new02
static int tolua_nodes_wySpriteEx_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex,r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new02_local
static int tolua_nodes_wySpriteEx_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex,r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new03
static int tolua_nodes_wySpriteEx_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_new03_local
static int tolua_nodes_wySpriteEx_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyZwoptexFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* pTex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyZwoptexFrame* f = ((wyZwoptexFrame*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteEx* tolua_ret = (wySpriteEx*)  Mtolua_new((wySpriteEx)(pTex,f));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteEx");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteEx_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_delete00
static int tolua_nodes_wySpriteEx_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_addChild00
static int tolua_nodes_wySpriteEx_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setAlpha00
static int tolua_nodes_wySpriteEx_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setColor00
static int tolua_nodes_wySpriteEx_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setColor01
static int tolua_nodes_wySpriteEx_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wySpriteEx_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_getTexture00
static int tolua_nodes_wySpriteEx_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setTexture00
static int tolua_nodes_wySpriteEx_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setFlipX00
static int tolua_nodes_wySpriteEx_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setFlipY00
static int tolua_nodes_wySpriteEx_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setTextureRect00
static int tolua_nodes_wySpriteEx_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wyRect rt = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(rt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAtlasIndex of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setAtlasIndex00
static int tolua_nodes_wySpriteEx_setAtlasIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAtlasIndex'", NULL);
#endif
  {
   self->setAtlasIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAtlasIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAtlasIndex of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_getAtlasIndex00
static int tolua_nodes_wySpriteEx_getAtlasIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAtlasIndex'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAtlasIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAtlasIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBatchNode of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_setBatchNode00
static int tolua_nodes_wySpriteEx_setBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  wySpriteBatchNode* batchNode = ((wySpriteBatchNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBatchNode'", NULL);
#endif
  {
   self->setBatchNode(batchNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: useBatchNode of class  wySpriteEx */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteEx_useBatchNode00
static int tolua_nodes_wySpriteEx_useBatchNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteEx",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteEx* self = (wySpriteEx*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'useBatchNode'", NULL);
#endif
  {
   self->useBatchNode(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'useBatchNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_make00
static int tolua_nodes_wySpriteBatchNode_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteBatchNode* tolua_ret = (wySpriteBatchNode*)  wySpriteBatchNode::make(tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteBatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_new00
static int tolua_nodes_wySpriteBatchNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteBatchNode* tolua_ret = (wySpriteBatchNode*)  Mtolua_new((wySpriteBatchNode)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteBatchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_new00_local
static int tolua_nodes_wySpriteBatchNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   wySpriteBatchNode* tolua_ret = (wySpriteBatchNode*)  Mtolua_new((wySpriteBatchNode)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteBatchNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_delete00
static int tolua_nodes_wySpriteBatchNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteBatchNode* self = (wySpriteBatchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMarker of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_setMarker00
static int tolua_nodes_wySpriteBatchNode_setMarker00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteBatchNode* self = (wySpriteBatchNode*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMarker'", NULL);
#endif
  {
   self->setMarker(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMarker'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMarker of class  wySpriteBatchNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteBatchNode_getMarker00
static int tolua_nodes_wySpriteBatchNode_getMarker00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteBatchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteBatchNode* self = (wySpriteBatchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMarker'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMarker();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMarker'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_delete00
static int tolua_nodes_wySpriteFrame_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_make00
static int tolua_nodes_wySpriteFrame_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  wySpriteFrame::make(duration,tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_make01
static int tolua_nodes_wySpriteFrame_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  wySpriteFrame::make(duration,rect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteFrame_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_make02
static int tolua_nodes_wySpriteFrame_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,4,0));
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  wySpriteFrame::make(duration,tex,rect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteFrame_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_make03
static int tolua_nodes_wySpriteFrame_make03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"wyPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"wySize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,4,0));
  wyPoint offset = *((wyPoint*)  tolua_tousertype(tolua_S,5,0));
  wySize originalSize = *((wySize*)  tolua_tousertype(tolua_S,6,0));
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  wySpriteFrame::make(duration,tex,rect,offset,originalSize);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteFrame_make02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_make04
static int tolua_nodes_wySpriteFrame_make04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"wyRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"wyPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"wySize",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float duration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,4,0));
  wyPoint offset = *((wyPoint*)  tolua_tousertype(tolua_S,5,0));
  wySize originalSize = *((wySize*)  tolua_tousertype(tolua_S,6,0));
  bool rotated = ((bool)  tolua_toboolean(tolua_S,7,0));
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  wySpriteFrame::make(duration,tex,rect,offset,originalSize,rotated);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wySpriteFrame_make03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRect of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_getRect00
static int tolua_nodes_wySpriteFrame_getRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRect of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setRect00
static int tolua_nodes_wySpriteFrame_setRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRect'", NULL);
#endif
  {
   self->setRect(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSourceColorRect of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_getSourceColorRect00
static int tolua_nodes_wySpriteFrame_getSourceColorRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSourceColorRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getSourceColorRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSourceColorRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSourceColorRect of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setSourceColorRect00
static int tolua_nodes_wySpriteFrame_setSourceColorRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSourceColorRect'", NULL);
#endif
  {
   self->setSourceColorRect(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSourceColorRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffset of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_getOffset00
static int tolua_nodes_wySpriteFrame_getOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffset'", NULL);
#endif
  {
   wyPoint tolua_ret = (wyPoint)  self->getOffset();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wyPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffset of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setOffset00
static int tolua_nodes_wySpriteFrame_setOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  wyPoint p = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffset'", NULL);
#endif
  {
   self->setOffset(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOriginalSize of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_getOriginalSize00
static int tolua_nodes_wySpriteFrame_getOriginalSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOriginalSize'", NULL);
#endif
  {
   wySize tolua_ret = (wySize)  self->getOriginalSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wySize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wySize));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOriginalSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOriginalSize of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setOriginalSize00
static int tolua_nodes_wySpriteFrame_setOriginalSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wySize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  wySize s = *((wySize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOriginalSize'", NULL);
#endif
  {
   self->setOriginalSize(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOriginalSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_getTexture00
static int tolua_nodes_wySpriteFrame_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setTexture00
static int tolua_nodes_wySpriteFrame_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotated of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_setRotated00
static int tolua_nodes_wySpriteFrame_setRotated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotated'", NULL);
#endif
  {
   self->setRotated(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRotated of class  wySpriteFrame */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpriteFrame_isRotated00
static int tolua_nodes_wySpriteFrame_isRotated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpriteFrame* self = (wySpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRotated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRotated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_make00
static int tolua_nodes_wyTextureNode_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTextureNode* tolua_ret = (wyTextureNode*)  wyTextureNode::make(tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTextureNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_new00
static int tolua_nodes_wyTextureNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTextureNode* tolua_ret = (wyTextureNode*)  Mtolua_new((wyTextureNode)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTextureNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_new00_local
static int tolua_nodes_wyTextureNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTextureNode* tolua_ret = (wyTextureNode*)  Mtolua_new((wyTextureNode)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTextureNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_delete00
static int tolua_nodes_wyTextureNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getAlpha00
static int tolua_nodes_wyTextureNode_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setAlpha00
static int tolua_nodes_wyTextureNode_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getColor00
static int tolua_nodes_wyTextureNode_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setColor00
static int tolua_nodes_wyTextureNode_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setColor01
static int tolua_nodes_wyTextureNode_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyTextureNode_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getTexture00
static int tolua_nodes_wyTextureNode_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setTexture00
static int tolua_nodes_wyTextureNode_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setTextureRect00
static int tolua_nodes_wyTextureNode_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureRect of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getTextureRect00
static int tolua_nodes_wyTextureNode_getTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getTextureRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAnimation of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_addAnimation00
static int tolua_nodes_wyTextureNode_addAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyAnimation* anim = ((wyAnimation*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAnimation'", NULL);
#endif
  {
   self->addAnimation(anim);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimationById of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getAnimationById00
static int tolua_nodes_wyTextureNode_getAnimationById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationById'", NULL);
#endif
  {
   wyAnimation* tolua_ret = (wyAnimation*)  self->getAnimationById(id);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayFrame of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_getDisplayFrame00
static int tolua_nodes_wyTextureNode_getDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayFrame'", NULL);
#endif
  {
   wyFrame* tolua_ret = (wyFrame*)  self->getDisplayFrame();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFrameDisplayed of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_isFrameDisplayed00
static int tolua_nodes_wyTextureNode_isFrameDisplayed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyFrame* frame = ((wyFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFrameDisplayed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFrameDisplayed(frame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFrameDisplayed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrame of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setDisplayFrame00
static int tolua_nodes_wyTextureNode_setDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  wyFrame* newFrame = ((wyFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrame'", NULL);
#endif
  {
   self->setDisplayFrame(newFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrameById of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setDisplayFrameById00
static int tolua_nodes_wyTextureNode_setDisplayFrameById00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
  int frameIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrameById'", NULL);
#endif
  {
   self->setDisplayFrameById(id,frameIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrameById'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setFlipX00
static int tolua_nodes_wyTextureNode_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  bool flipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(flipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_isFlipX00
static int tolua_nodes_wyTextureNode_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setFlipY00
static int tolua_nodes_wyTextureNode_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  bool flipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(flipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_isFlipY00
static int tolua_nodes_wyTextureNode_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotatedZwoptex of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setRotatedZwoptex00
static int tolua_nodes_wyTextureNode_setRotatedZwoptex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotatedZwoptex'", NULL);
#endif
  {
   self->setRotatedZwoptex(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotatedZwoptex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRotatedZwoptex of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_isRotatedZwoptex00
static int tolua_nodes_wyTextureNode_isRotatedZwoptex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRotatedZwoptex'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRotatedZwoptex();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRotatedZwoptex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoFit of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_setAutoFit00
static int tolua_nodes_wyTextureNode_setAutoFit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoFit'", NULL);
#endif
  {
   self->setAutoFit(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoFit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAutoFit of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_isAutoFit00
static int tolua_nodes_wyTextureNode_isAutoFit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAutoFit'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAutoFit();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAutoFit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeFrame of class  wyTextureNode */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextureNode_makeFrame00
static int tolua_nodes_wyTextureNode_makeFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextureNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextureNode* self = (wyTextureNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeFrame'", NULL);
#endif
  {
   wySpriteFrame* tolua_ret = (wySpriteFrame*)  self->makeFrame();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpriteFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_make00
static int tolua_nodes_wyTGATileMapAtlas_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int mapResId = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyTGATileMapAtlas* tolua_ret = (wyTGATileMapAtlas*)  wyTGATileMapAtlas::make(tex,mapResId,tileWidth,tileHeight);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTGATileMapAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_new00
static int tolua_nodes_wyTGATileMapAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int mapResId = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyTGATileMapAtlas* tolua_ret = (wyTGATileMapAtlas*)  Mtolua_new((wyTGATileMapAtlas)(tex,mapResId,tileWidth,tileHeight));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTGATileMapAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_new00_local
static int tolua_nodes_wyTGATileMapAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  int mapResId = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   wyTGATileMapAtlas* tolua_ret = (wyTGATileMapAtlas*)  Mtolua_new((wyTGATileMapAtlas)(tex,mapResId,tileWidth,tileHeight));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTGATileMapAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_delete00
static int tolua_nodes_wyTGATileMapAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTGATileMapAtlas* self = (wyTGATileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasTileAt of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_hasTileAt00
static int tolua_nodes_wyTGATileMapAtlas_hasTileAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTGATileMapAtlas* self = (wyTGATileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasTileAt'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasTileAt(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasTileAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHorizontalTileCount of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_getHorizontalTileCount00
static int tolua_nodes_wyTGATileMapAtlas_getHorizontalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTGATileMapAtlas* self = (wyTGATileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHorizontalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalTileCount of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_getVerticalTileCount00
static int tolua_nodes_wyTGATileMapAtlas_getVerticalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTGATileMapAtlas* self = (wyTGATileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVerticalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileValueAt of class  wyTGATileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTGATileMapAtlas_tileValueAt00
static int tolua_nodes_wyTGATileMapAtlas_tileValueAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTGATileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTGATileMapAtlas* self = (wyTGATileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tileValueAt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->tileValueAt(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileValueAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_make00
static int tolua_nodes_wyTiledSprite_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTiledSprite* tolua_ret = (wyTiledSprite*)  wyTiledSprite::make(tex);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTiledSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_new00
static int tolua_nodes_wyTiledSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTiledSprite* tolua_ret = (wyTiledSprite*)  Mtolua_new((wyTiledSprite)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTiledSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_new00_local
static int tolua_nodes_wyTiledSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,NULL));
  {
   wyTiledSprite* tolua_ret = (wyTiledSprite*)  Mtolua_new((wyTiledSprite)(tex));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTiledSprite");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_delete00
static int tolua_nodes_wyTiledSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTileVertical of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_isTileVertical00
static int tolua_nodes_wyTiledSprite_isTileVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTileVertical'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTileVertical();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTileVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTileHorizontal of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_isTileHorizontal00
static int tolua_nodes_wyTiledSprite_isTileHorizontal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTileHorizontal'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTileHorizontal();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTileHorizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTileDirection of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setTileDirection00
static int tolua_nodes_wyTiledSprite_setTileDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  bool horizontal = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool vertical = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTileDirection'", NULL);
#endif
  {
   self->setTileDirection(horizontal,vertical);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTileDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setTextureRect00
static int tolua_nodes_wyTiledSprite_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  wyRect r = *((wyRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureRect of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getTextureRect00
static int tolua_nodes_wyTiledSprite_getTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureRect'", NULL);
#endif
  {
   wyRect tolua_ret = (wyRect)  self->getTextureRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyRect));
     tolua_pushusertype(tolua_S,tolua_obj,"wyRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffsetX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setOffsetX00
static int tolua_nodes_wyTiledSprite_setOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int offset = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffsetX'", NULL);
#endif
  {
   self->setOffsetX(offset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffsetY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setOffsetY00
static int tolua_nodes_wyTiledSprite_setOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int offset = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffsetY'", NULL);
#endif
  {
   self->setOffsetY(offset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: offsetBy of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_offsetBy00
static int tolua_nodes_wyTiledSprite_offsetBy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int dx = ((int)  tolua_tonumber(tolua_S,2,0));
  int dy = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'offsetBy'", NULL);
#endif
  {
   self->offsetBy(dx,dy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'offsetBy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlinging of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_isFlinging00
static int tolua_nodes_wyTiledSprite_isFlinging00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlinging'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlinging();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlinging'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxOffsetX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setMaxOffsetX00
static int tolua_nodes_wyTiledSprite_setMaxOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int max = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxOffsetX'", NULL);
#endif
  {
   self->setMaxOffsetX(max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxOffsetX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getMaxOffsetX00
static int tolua_nodes_wyTiledSprite_getMaxOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxOffsetX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxOffsetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinOffsetX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setMinOffsetX00
static int tolua_nodes_wyTiledSprite_setMinOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int min = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinOffsetX'", NULL);
#endif
  {
   self->setMinOffsetX(min);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinOffsetX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getMinOffsetX00
static int tolua_nodes_wyTiledSprite_getMinOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinOffsetX'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMinOffsetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxOffsetY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setMaxOffsetY00
static int tolua_nodes_wyTiledSprite_setMaxOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int max = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxOffsetY'", NULL);
#endif
  {
   self->setMaxOffsetY(max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxOffsetY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getMaxOffsetY00
static int tolua_nodes_wyTiledSprite_getMaxOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxOffsetY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxOffsetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinOffsetY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setMinOffsetY00
static int tolua_nodes_wyTiledSprite_setMinOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  int min = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinOffsetY'", NULL);
#endif
  {
   self->setMinOffsetY(min);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinOffsetY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getMinOffsetY00
static int tolua_nodes_wyTiledSprite_getMinOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinOffsetY'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMinOffsetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopFling of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_stopFling00
static int tolua_nodes_wyTiledSprite_stopFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopFling'", NULL);
#endif
  {
   self->stopFling();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fling of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_fling00
static int tolua_nodes_wyTiledSprite_fling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  float velocityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fling'", NULL);
#endif
  {
   self->fling(velocityX,velocityY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStretch of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setStretch00
static int tolua_nodes_wyTiledSprite_setStretch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStretch'", NULL);
#endif
  {
   self->setStretch(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStretch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isStretch of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_isStretch00
static int tolua_nodes_wyTiledSprite_isStretch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isStretch'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isStretch();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isStretch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpacing of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setSpacing00
static int tolua_nodes_wyTiledSprite_setSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpacing'", NULL);
#endif
  {
   self->setSpacing(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpacingX of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getSpacingX00
static int tolua_nodes_wyTiledSprite_getSpacingX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpacingX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSpacingX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpacingX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSpacingY of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_getSpacingY00
static int tolua_nodes_wyTiledSprite_getSpacingY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSpacingY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSpacingY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSpacingY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDither of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_isDither00
static int tolua_nodes_wyTiledSprite_isDither00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDither'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDither();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDither'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDither of class  wyTiledSprite */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTiledSprite_setDither00
static int tolua_nodes_wyTiledSprite_setDither00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTiledSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTiledSprite* self = (wyTiledSprite*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDither'", NULL);
#endif
  {
   self->setDither(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDither'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_delete00
static int tolua_nodes_wyTileMapAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasTileAt of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_hasTileAt00
static int tolua_nodes_wyTileMapAtlas_hasTileAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasTileAt'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasTileAt(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasTileAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHorizontalTileCount of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_getHorizontalTileCount00
static int tolua_nodes_wyTileMapAtlas_getHorizontalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHorizontalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getHorizontalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHorizontalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVerticalTileCount of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_getVerticalTileCount00
static int tolua_nodes_wyTileMapAtlas_getVerticalTileCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVerticalTileCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getVerticalTileCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVerticalTileCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileValueAt of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_tileValueAt00
static int tolua_nodes_wyTileMapAtlas_tileValueAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tileValueAt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->tileValueAt(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileValueAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTile of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_getTile00
static int tolua_nodes_wyTileMapAtlas_getTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTile'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTile(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTile of class  wyTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTileMapAtlas_setTile00
static int tolua_nodes_wyTileMapAtlas_setTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTileMapAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTileMapAtlas* self = (wyTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  int tileValue = ((int)  tolua_tonumber(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTile'", NULL);
#endif
  {
   self->setTile(tileValue,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_make00
static int tolua_nodes_wyStripRibbon_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyStripRibbon* tolua_ret = (wyStripRibbon*)  wyStripRibbon::make(tex,color,fade);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyStripRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_new00
static int tolua_nodes_wyStripRibbon_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyStripRibbon* tolua_ret = (wyStripRibbon*)  Mtolua_new((wyStripRibbon)(tex,color,fade));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyStripRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_new00_local
static int tolua_nodes_wyStripRibbon_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyStripRibbon* tolua_ret = (wyStripRibbon*)  Mtolua_new((wyStripRibbon)(tex,color,fade));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyStripRibbon");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_delete00
static int tolua_nodes_wyStripRibbon_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_getTexture00
static int tolua_nodes_wyStripRibbon_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_setTexture00
static int tolua_nodes_wyStripRibbon_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_update00
static int tolua_nodes_wyStripRibbon_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_addPoint00
static int tolua_nodes_wyStripRibbon_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyPoint location = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(location);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wyStripRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyStripRibbon_reset00
static int tolua_nodes_wyStripRibbon_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyStripRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyStripRibbon* self = (wyStripRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_make00
static int tolua_nodes_wySpotRibbon_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wySpotRibbon* tolua_ret = (wySpotRibbon*)  wySpotRibbon::make(tex,color,fade);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpotRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_new00
static int tolua_nodes_wySpotRibbon_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wySpotRibbon* tolua_ret = (wySpotRibbon*)  Mtolua_new((wySpotRibbon)(tex,color,fade));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpotRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_new00_local
static int tolua_nodes_wySpotRibbon_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wySpotRibbon* tolua_ret = (wySpotRibbon*)  Mtolua_new((wySpotRibbon)(tex,color,fade));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wySpotRibbon");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_delete00
static int tolua_nodes_wySpotRibbon_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_getTexture00
static int tolua_nodes_wySpotRibbon_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_setTexture00
static int tolua_nodes_wySpotRibbon_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_update00
static int tolua_nodes_wySpotRibbon_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_addPoint00
static int tolua_nodes_wySpotRibbon_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyPoint location = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(location);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_reset00
static int tolua_nodes_wySpotRibbon_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDistance of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_setDistance00
static int tolua_nodes_wySpotRibbon_setDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDistance'", NULL);
#endif
  {
   self->setDistance(d);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDistance of class  wySpotRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wySpotRibbon_getDistance00
static int tolua_nodes_wySpotRibbon_getDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wySpotRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wySpotRibbon* self = (wySpotRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDistance'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDistance();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_make00
static int tolua_nodes_wyBladeRibbon_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  float fade = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyBladeRibbon* tolua_ret = (wyBladeRibbon*)  wyBladeRibbon::make(tex,color,fade);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyBladeRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_delete00
static int tolua_nodes_wyBladeRibbon_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_getAlpha00
static int tolua_nodes_wyBladeRibbon_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_setAlpha00
static int tolua_nodes_wyBladeRibbon_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_getColor00
static int tolua_nodes_wyBladeRibbon_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_setColor00
static int tolua_nodes_wyBladeRibbon_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_setColor01
static int tolua_nodes_wyBladeRibbon_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyBladeRibbon_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_getTexture00
static int tolua_nodes_wyBladeRibbon_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_setTexture00
static int tolua_nodes_wyBladeRibbon_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_update00
static int tolua_nodes_wyBladeRibbon_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_addPoint00
static int tolua_nodes_wyBladeRibbon_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyPoint location = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(location);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_reset00
static int tolua_nodes_wyBladeRibbon_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxPointCount of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_setMaxPointCount00
static int tolua_nodes_wyBladeRibbon_setMaxPointCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
  int max = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxPointCount'", NULL);
#endif
  {
   self->setMaxPointCount(max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxPointCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxPointCount of class  wyBladeRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyBladeRibbon_getMaxPointCount00
static int tolua_nodes_wyBladeRibbon_getMaxPointCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyBladeRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyBladeRibbon* self = (wyBladeRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxPointCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMaxPointCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxPointCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_make00
static int tolua_nodes_wyLineRibbon_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,3,0));
  {
   wyLineRibbon* tolua_ret = (wyLineRibbon*)  wyLineRibbon::make(tex,color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyLineRibbon");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_delete00
static int tolua_nodes_wyLineRibbon_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getTexture00
static int tolua_nodes_wyLineRibbon_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   wyTexture2D* tolua_ret = (wyTexture2D*)  self->getTexture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_setTexture00
static int tolua_nodes_wyLineRibbon_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getAlpha00
static int tolua_nodes_wyLineRibbon_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_setAlpha00
static int tolua_nodes_wyLineRibbon_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getColor00
static int tolua_nodes_wyLineRibbon_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_setColor00
static int tolua_nodes_wyLineRibbon_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_setColor01
static int tolua_nodes_wyLineRibbon_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyLineRibbon_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_update00
static int tolua_nodes_wyLineRibbon_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_addPoint00
static int tolua_nodes_wyLineRibbon_addPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  wyPoint location = *((wyPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint'", NULL);
#endif
  {
   self->addPoint(location);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_reset00
static int tolua_nodes_wyLineRibbon_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'", NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLineWidth of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_setLineWidth00
static int tolua_nodes_wyLineRibbon_setLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLineWidth'", NULL);
#endif
  {
   self->setLineWidth(width);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLineWidth of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getLineWidth00
static int tolua_nodes_wyLineRibbon_getLineWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLineWidth(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLineColor of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getLineColor00
static int tolua_nodes_wyLineRibbon_getLineColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineColor'", NULL);
#endif
  {
   wyColor4B tolua_ret = (wyColor4B)  self->getLineColor(index);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor4B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor4B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor4B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor4B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLineCount of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getLineCount00
static int tolua_nodes_wyLineRibbon_getLineCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLineCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLineCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLineCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinePointCount of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getLinePointCount00
static int tolua_nodes_wyLineRibbon_getLinePointCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinePointCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLinePointCount(index);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinePointCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLinePointList of class  wyLineRibbon */
#ifndef TOLUA_DISABLE_tolua_nodes_wyLineRibbon_getLinePointList00
static int tolua_nodes_wyLineRibbon_getLinePointList00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyLineRibbon",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyLineRibbon* self = (wyLineRibbon*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLinePointList'", NULL);
#endif
  {
   wyPoint* tolua_ret = (wyPoint*)  self->getLinePointList(index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLinePointList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyDotPageIndicator */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDotPageIndicator_make00
static int tolua_nodes_wyDotPageIndicator_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDotPageIndicator",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTexture2D* dot = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyTexture2D* selectedDot = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
  {
   wyDotPageIndicator* tolua_ret = (wyDotPageIndicator*)  wyDotPageIndicator::make(dot,selectedDot);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyDotPageIndicator");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyDotPageIndicator */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDotPageIndicator_make01
static int tolua_nodes_wyDotPageIndicator_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyDotPageIndicator",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,4,"wyTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTexture2D* dot = ((wyTexture2D*)  tolua_tousertype(tolua_S,2,0));
  wyRect dotRect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
  wyTexture2D* selectedDot = ((wyTexture2D*)  tolua_tousertype(tolua_S,4,0));
  wyRect selectedDotRect = *((wyRect*)  tolua_tousertype(tolua_S,5,0));
  {
   wyDotPageIndicator* tolua_ret = (wyDotPageIndicator*)  wyDotPageIndicator::make(dot,dotRect,selectedDot,selectedDotRect);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyDotPageIndicator");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyDotPageIndicator_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyDotPageIndicator */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDotPageIndicator_delete00
static int tolua_nodes_wyDotPageIndicator_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDotPageIndicator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDotPageIndicator* self = (wyDotPageIndicator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDotSpacing of class  wyDotPageIndicator */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDotPageIndicator_setDotSpacing00
static int tolua_nodes_wyDotPageIndicator_setDotSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDotPageIndicator",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDotPageIndicator* self = (wyDotPageIndicator*)  tolua_tousertype(tolua_S,1,0);
  float spacing = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDotSpacing'", NULL);
#endif
  {
   self->setDotSpacing(spacing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDotSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDotSpacing of class  wyDotPageIndicator */
#ifndef TOLUA_DISABLE_tolua_nodes_wyDotPageIndicator_getDotSpacing00
static int tolua_nodes_wyDotPageIndicator_getDotSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyDotPageIndicator",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyDotPageIndicator* self = (wyDotPageIndicator*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDotSpacing'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDotSpacing();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDotSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_make00
static int tolua_nodes_wyAnimation_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   wyAnimation* tolua_ret = (wyAnimation*)  wyAnimation::make(id);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyAnimation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_delete00
static int tolua_nodes_wyAnimation_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDuration of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_getDuration00
static int tolua_nodes_wyAnimation_getDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDuration'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFrames of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_getFrames00
static int tolua_nodes_wyAnimation_getFrames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFrames'", NULL);
#endif
  {
   wyArray* tolua_ret = (wyArray*)  self->getFrames();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFrames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getId of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_getId00
static int tolua_nodes_wyAnimation_getId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getId'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getId();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFrame of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_addFrame00
static int tolua_nodes_wyAnimation_addFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
  float frameDuration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyTexture2D* tex = ((wyTexture2D*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFrame'", NULL);
#endif
  {
   self->addFrame(frameDuration,tex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFrame of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_addFrame01
static int tolua_nodes_wyAnimation_addFrame01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
  float frameDuration = ((float)  tolua_tonumber(tolua_S,2,0));
  wyRect rect = *((wyRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFrame'", NULL);
#endif
  {
   self->addFrame(frameDuration,rect);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyAnimation_addFrame00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFrame of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_addFrame02
static int tolua_nodes_wyAnimation_addFrame02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
  wyFrame* f = ((wyFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFrame'", NULL);
#endif
  {
   self->addFrame(f);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyAnimation_addFrame01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCallback of class  wyAnimation */
#ifndef TOLUA_DISABLE_tolua_nodes_wyAnimation_setCallback00
static int tolua_nodes_wyAnimation_setCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyAnimation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyAnimationCallback",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyAnimation* self = (wyAnimation*)  tolua_tousertype(tolua_S,1,0);
  wyAnimationCallback* callback = ((wyAnimationCallback*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCallback'", NULL);
#endif
  {
   self->setCallback(callback);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_make00
static int tolua_nodes_wyPageControl_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyPageControl* tolua_ret = (wyPageControl*)  wyPageControl::make();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyPageControl");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_new00
static int tolua_nodes_wyPageControl_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyPageControl* tolua_ret = (wyPageControl*)  Mtolua_new((wyPageControl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyPageControl");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_new00_local
static int tolua_nodes_wyPageControl_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   wyPageControl* tolua_ret = (wyPageControl*)  Mtolua_new((wyPageControl)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyPageControl");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_delete00
static int tolua_nodes_wyPageControl_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesBegan of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_touchesBegan00
static int tolua_nodes_wyPageControl_touchesBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesBegan(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesMoved of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_touchesMoved00
static int tolua_nodes_wyPageControl_touchesMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesMoved(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesEnded of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_touchesEnded00
static int tolua_nodes_wyPageControl_touchesEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesEnded(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesCancelled of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_touchesCancelled00
static int tolua_nodes_wyPageControl_touchesCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesCancelled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesCancelled(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onFling of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_onFling00
static int tolua_nodes_wyPageControl_onFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e1 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
  wyMotionEvent* e2 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,3,0));
  float velocityX = ((float)  tolua_tonumber(tolua_S,4,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onFling'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onFling(*e1,*e2,velocityX,velocityY);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPage of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_addPage00
static int tolua_nodes_wyPageControl_addPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyNode* page = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPage'", NULL);
#endif
  {
   self->addPage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPageAt of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_addPageAt00
static int tolua_nodes_wyPageControl_addPageAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyNode* page = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPageAt'", NULL);
#endif
  {
   self->addPageAt(page,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPageAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePage of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_removePage00
static int tolua_nodes_wyPageControl_removePage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyNode* page = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePage'", NULL);
#endif
  {
   self->removePage(page);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removePageAt of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_removePageAt00
static int tolua_nodes_wyPageControl_removePageAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removePageAt'", NULL);
#endif
  {
   self->removePageAt(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removePageAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllPages of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_removeAllPages00
static int tolua_nodes_wyPageControl_removeAllPages00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllPages'", NULL);
#endif
  {
   self->removeAllPages();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllPages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInitialPage of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setInitialPage00
static int tolua_nodes_wyPageControl_setInitialPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInitialPage'", NULL);
#endif
  {
   self->setInitialPage(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInitialPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gotoPage of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_gotoPage00
static int tolua_nodes_wyPageControl_gotoPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  bool animate = ((bool)  tolua_toboolean(tolua_S,3,false));
  float duration = ((float)  tolua_tonumber(tolua_S,4,1.0f));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gotoPage'", NULL);
#endif
  {
   self->gotoPage(index,animate,duration);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gotoPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPageSpacing of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setPageSpacing00
static int tolua_nodes_wyPageControl_setPageSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  float spacing = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPageSpacing'", NULL);
#endif
  {
   self->setPageSpacing(spacing);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPageSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPageSpacing of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_getPageSpacing00
static int tolua_nodes_wyPageControl_getPageSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPageSpacing'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPageSpacing();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPageSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenterY of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_getCenterY00
static int tolua_nodes_wyPageControl_getCenterY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenterY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getCenterY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenterY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterY of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setCenterY00
static int tolua_nodes_wyPageControl_setCenterY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterY'", NULL);
#endif
  {
   self->setCenterY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenterX of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_getCenterX00
static int tolua_nodes_wyPageControl_getCenterX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenterX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getCenterX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenterX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterX of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setCenterX00
static int tolua_nodes_wyPageControl_setCenterX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterX'", NULL);
#endif
  {
   self->setCenterX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPageCount of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_getPageCount00
static int tolua_nodes_wyPageControl_getPageCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPageCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getPageCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPageCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCallback of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setCallback00
static int tolua_nodes_wyPageControl_setCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyPageControlCallback",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  wyPageControlCallback* callback = ((wyPageControlCallback*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCallback'", NULL);
#endif
  {
   self->setCallback(callback,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVertical of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_isVertical00
static int tolua_nodes_wyPageControl_isVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertical'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVertical();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVertical of class  wyPageControl */
#ifndef TOLUA_DISABLE_tolua_nodes_wyPageControl_setVertical00
static int tolua_nodes_wyPageControl_setVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyPageControl",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyPageControl* self = (wyPageControl*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertical'", NULL);
#endif
  {
   self->setVertical(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_make00
static int tolua_nodes_wyTextBox_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* normal = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  wyNode* selected = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
  wyNode* disabled = ((wyNode*)  tolua_tousertype(tolua_S,4,0));
  wyNode* focused = ((wyNode*)  tolua_tousertype(tolua_S,5,0));
  wyNode* label = ((wyNode*)  tolua_tousertype(tolua_S,6,0));
  {
   wyTextBox* tolua_ret = (wyTextBox*)  wyTextBox::make(normal,selected,disabled,focused,label);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyTextBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_delete00
static int tolua_nodes_wyTextBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnter of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_onEnter00
static int tolua_nodes_wyTextBox_onEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnter'", NULL);
#endif
  {
   self->onEnter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_onExit00
static int tolua_nodes_wyTextBox_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getText of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getText00
static int tolua_nodes_wyTextBox_getText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getText'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getText();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setText00
static int tolua_nodes_wyTextBox_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'", NULL);
#endif
  {
   self->setText(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getColor00
static int tolua_nodes_wyTextBox_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   wyColor3B tolua_ret = (wyColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wyColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wyColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"wyColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setColor00
static int tolua_nodes_wyTextBox_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  wyColor3B color = *((wyColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setColor01
static int tolua_nodes_wyTextBox_setColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_nodes_wyTextBox_setColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAlpha of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getAlpha00
static int tolua_nodes_wyTextBox_getAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlpha of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setAlpha00
static int tolua_nodes_wyTextBox_setAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlpha'", NULL);
#endif
  {
   self->setAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCallback of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setCallback00
static int tolua_nodes_wyTextBox_setCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyTextBoxCallback",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  wyTextBoxCallback* callback = ((wyTextBoxCallback*)  tolua_tousertype(tolua_S,2,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCallback'", NULL);
#endif
  {
   self->setCallback(callback,data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTitle of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setTitle00
static int tolua_nodes_wyTextBox_setTitle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* title = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTitle'", NULL);
#endif
  {
   self->setTitle(title);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTitle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTitle of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getTitle00
static int tolua_nodes_wyTextBox_getTitle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTitle'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getTitle();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTitle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMessage of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setMessage00
static int tolua_nodes_wyTextBox_setMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* msg = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMessage'", NULL);
#endif
  {
   self->setMessage(msg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMessage of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getMessage00
static int tolua_nodes_wyTextBox_getMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMessage'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getMessage();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositiveButton of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setPositiveButton00
static int tolua_nodes_wyTextBox_setPositiveButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* btn = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositiveButton'", NULL);
#endif
  {
   self->setPositiveButton(btn);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositiveButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositiveButton of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getPositiveButton00
static int tolua_nodes_wyTextBox_getPositiveButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositiveButton'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPositiveButton();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositiveButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNegativeButton of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setNegativeButton00
static int tolua_nodes_wyTextBox_setNegativeButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* btn = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNegativeButton'", NULL);
#endif
  {
   self->setNegativeButton(btn);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNegativeButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNegativeButton of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_getNegativeButton00
static int tolua_nodes_wyTextBox_getNegativeButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNegativeButton'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getNegativeButton();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNegativeButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onPositiveButtonClicked of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_onPositiveButtonClicked00
static int tolua_nodes_wyTextBox_onPositiveButtonClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onPositiveButtonClicked'", NULL);
#endif
  {
   self->onPositiveButtonClicked(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onPositiveButtonClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onNegativeButtonClicked of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_onNegativeButtonClicked00
static int tolua_nodes_wyTextBox_onNegativeButtonClicked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onNegativeButtonClicked'", NULL);
#endif
  {
   self->onNegativeButtonClicked();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onNegativeButtonClicked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onTextChanged of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_onTextChanged00
static int tolua_nodes_wyTextBox_onTextChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  const char* newText = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onTextChanged'", NULL);
#endif
  {
   self->onTextChanged(newText);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onTextChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPadding of class  wyTextBox */
#ifndef TOLUA_DISABLE_tolua_nodes_wyTextBox_setPadding00
static int tolua_nodes_wyTextBox_setPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyTextBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyTextBox* self = (wyTextBox*)  tolua_tousertype(tolua_S,1,0);
  float left = ((float)  tolua_tonumber(tolua_S,2,0));
  float top = ((float)  tolua_tonumber(tolua_S,3,0));
  float right = ((float)  tolua_tonumber(tolua_S,4,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPadding'", NULL);
#endif
  {
   self->setPadding(left,top,right,bottom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPadding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onScrollOffsetChanged of class  wyScrollableLayerListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayerListener_onScrollOffsetChanged00
static int tolua_nodes_wyScrollableLayerListener_onScrollOffsetChanged00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayerListener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayerListener* self = (wyScrollableLayerListener*)  tolua_tousertype(tolua_S,1,0);
  wyScrollableLayer* layer = ((wyScrollableLayer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onScrollOffsetChanged'", NULL);
#endif
  {
   self->onScrollOffsetChanged(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onScrollOffsetChanged'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onStartFling of class  wyScrollableLayerListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayerListener_onStartFling00
static int tolua_nodes_wyScrollableLayerListener_onStartFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayerListener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayerListener* self = (wyScrollableLayerListener*)  tolua_tousertype(tolua_S,1,0);
  wyScrollableLayer* layer = ((wyScrollableLayer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onStartFling'", NULL);
#endif
  {
   self->onStartFling(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onStartFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEndFling of class  wyScrollableLayerListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayerListener_onEndFling00
static int tolua_nodes_wyScrollableLayerListener_onEndFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayerListener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayerListener* self = (wyScrollableLayerListener*)  tolua_tousertype(tolua_S,1,0);
  wyScrollableLayer* layer = ((wyScrollableLayer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEndFling'", NULL);
#endif
  {
   self->onEndFling(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEndFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onScrollableChildNotVisible of class  wyScrollableLayerListener */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayerListener_onScrollableChildNotVisible00
static int tolua_nodes_wyScrollableLayerListener_onScrollableChildNotVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayerListener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayerListener* self = (wyScrollableLayerListener*)  tolua_tousertype(tolua_S,1,0);
  wyScrollableLayer* layer = ((wyScrollableLayer*)  tolua_tousertype(tolua_S,2,0));
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onScrollableChildNotVisible'", NULL);
#endif
  {
   self->onScrollableChildNotVisible(layer,child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onScrollableChildNotVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_make00
static int tolua_nodes_wyScrollableLayer_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyScrollableLayer* tolua_ret = (wyScrollableLayer*)  wyScrollableLayer::make(color);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScrollableLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_new00
static int tolua_nodes_wyScrollableLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyScrollableLayer* tolua_ret = (wyScrollableLayer*)  Mtolua_new((wyScrollableLayer)(color));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScrollableLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_new00_local
static int tolua_nodes_wyScrollableLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyColor4B color = *((wyColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   wyScrollableLayer* tolua_ret = (wyScrollableLayer*)  Mtolua_new((wyScrollableLayer)(color));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyScrollableLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_delete00
static int tolua_nodes_wyScrollableLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setContentSize00
static int tolua_nodes_wyScrollableLayer_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesBegan of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_touchesBegan00
static int tolua_nodes_wyScrollableLayer_touchesBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesBegan(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesMoved of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_touchesMoved00
static int tolua_nodes_wyScrollableLayer_touchesMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesMoved'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesMoved(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesEnded of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_touchesEnded00
static int tolua_nodes_wyScrollableLayer_touchesEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesEnded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesEnded(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchesCancelled of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_touchesCancelled00
static int tolua_nodes_wyScrollableLayer_touchesCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchesCancelled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->touchesCancelled(*e);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchesCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onFling of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_onFling00
static int tolua_nodes_wyScrollableLayer_onFling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wyMotionEvent",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wyMotionEvent",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyMotionEvent* e1 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,2,0));
  wyMotionEvent* e2 = ((wyMotionEvent*)  tolua_tousertype(tolua_S,3,0));
  float velocityX = ((float)  tolua_tonumber(tolua_S,4,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onFling'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->onFling(*e1,*e2,velocityX,velocityY);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onFling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVertical of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setVertical00
static int tolua_nodes_wyScrollableLayer_setVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertical'", NULL);
#endif
  {
   self->setVertical(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isVertical of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_isVertical00
static int tolua_nodes_wyScrollableLayer_isVertical00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isVertical'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isVertical();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isVertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHorizontal of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setHorizontal00
static int tolua_nodes_wyScrollableLayer_setHorizontal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontal'", NULL);
#endif
  {
   self->setHorizontal(flag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isHorizontal of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_isHorizontal00
static int tolua_nodes_wyScrollableLayer_isHorizontal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isHorizontal'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isHorizontal();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isHorizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addScrollableChildLocked of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_addScrollableChildLocked00
static int tolua_nodes_wyScrollableLayer_addScrollableChildLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  int z = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,INVALID_TAG));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addScrollableChildLocked'", NULL);
#endif
  {
   self->addScrollableChildLocked(child,z,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addScrollableChildLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeScrollableChildLocked of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_removeScrollableChildLocked00
static int tolua_nodes_wyScrollableLayer_removeScrollableChildLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyNode* child = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeScrollableChildLocked'", NULL);
#endif
  {
   self->removeScrollableChildLocked(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeScrollableChildLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeScrollableChildByTagLocked of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_removeScrollableChildByTagLocked00
static int tolua_nodes_wyScrollableLayer_removeScrollableChildByTagLocked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeScrollableChildByTagLocked'", NULL);
#endif
  {
   self->removeScrollableChildByTagLocked(tag,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeScrollableChildByTagLocked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScrollableChildByTag of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getScrollableChildByTag00
static int tolua_nodes_wyScrollableLayer_getScrollableChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScrollableChildByTag'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getScrollableChildByTag(tag);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScrollableChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScrollExtent of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getScrollExtent00
static int tolua_nodes_wyScrollableLayer_getScrollExtent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScrollExtent'", NULL);
#endif
  {
   wySize tolua_ret = (wySize)  self->getScrollExtent();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wySize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wySize));
     tolua_pushusertype(tolua_S,tolua_obj,"wySize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScrollExtent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHorizontalThumb of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setHorizontalThumb00
static int tolua_nodes_wyScrollableLayer_setHorizontalThumb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyNode* thumb = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHorizontalThumb'", NULL);
#endif
  {
   self->setHorizontalThumb(thumb);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHorizontalThumb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVerticalThumb of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setVerticalThumb00
static int tolua_nodes_wyScrollableLayer_setVerticalThumb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyNode* thumb = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVerticalThumb'", NULL);
#endif
  {
   self->setVerticalThumb(thumb);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVerticalThumb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThumbFadeOutTime of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setThumbFadeOutTime00
static int tolua_nodes_wyScrollableLayer_setThumbFadeOutTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float time = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThumbFadeOutTime'", NULL);
#endif
  {
   self->setThumbFadeOutTime(time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setThumbFadeOutTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getThumbFadeOutTime of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getThumbFadeOutTime00
static int tolua_nodes_wyScrollableLayer_getThumbFadeOutTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getThumbFadeOutTime'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getThumbFadeOutTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getThumbFadeOutTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLeftMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setLeftMargin00
static int tolua_nodes_wyScrollableLayer_setLeftMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float m = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLeftMargin'", NULL);
#endif
  {
   self->setLeftMargin(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLeftMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLeftMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getLeftMargin00
static int tolua_nodes_wyScrollableLayer_getLeftMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLeftMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLeftMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeftMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRightMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setRightMargin00
static int tolua_nodes_wyScrollableLayer_setRightMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float m = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRightMargin'", NULL);
#endif
  {
   self->setRightMargin(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRightMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRightMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getRightMargin00
static int tolua_nodes_wyScrollableLayer_getRightMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRightMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRightMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRightMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTopMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setTopMargin00
static int tolua_nodes_wyScrollableLayer_setTopMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float m = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTopMargin'", NULL);
#endif
  {
   self->setTopMargin(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTopMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTopMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getTopMargin00
static int tolua_nodes_wyScrollableLayer_getTopMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTopMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTopMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTopMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBottomMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setBottomMargin00
static int tolua_nodes_wyScrollableLayer_setBottomMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float m = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBottomMargin'", NULL);
#endif
  {
   self->setBottomMargin(m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBottomMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBottomMargin of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getBottomMargin00
static int tolua_nodes_wyScrollableLayer_getBottomMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBottomMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBottomMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBottomMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffsetX of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getOffsetX00
static int tolua_nodes_wyScrollableLayer_getOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getOffsetX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffsetY of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_getOffsetY00
static int tolua_nodes_wyScrollableLayer_getOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getOffsetY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffsetX of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setOffsetX00
static int tolua_nodes_wyScrollableLayer_setOffsetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffsetX'", NULL);
#endif
  {
   self->setOffsetX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffsetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffsetY of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setOffsetY00
static int tolua_nodes_wyScrollableLayer_setOffsetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffsetY'", NULL);
#endif
  {
   self->setOffsetY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffsetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAtXEnd of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_isAtXEnd00
static int tolua_nodes_wyScrollableLayer_isAtXEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAtXEnd'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAtXEnd();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAtXEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAtYEnd of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_isAtYEnd00
static int tolua_nodes_wyScrollableLayer_isAtYEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAtYEnd'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAtYEnd();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAtYEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCallback of class  wyScrollableLayer */
#ifndef TOLUA_DISABLE_tolua_nodes_wyScrollableLayer_setCallback00
static int tolua_nodes_wyScrollableLayer_setCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyScrollableLayer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyScrollableLayerListener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyScrollableLayer* self = (wyScrollableLayer*)  tolua_tousertype(tolua_S,1,0);
  wyScrollableLayerListener* callback = ((wyScrollableLayerListener*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCallback'", NULL);
#endif
  {
   self->setCallback(callback);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_delete00
static int tolua_nodes_wyToast_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_make00
static int tolua_nodes_wyToast_make00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"wyNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyNode* bg = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  wyNode* content = ((wyNode*)  tolua_tousertype(tolua_S,3,0));
  float duration = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyToast* tolua_ret = (wyToast*)  wyToast::make(bg,content,duration);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyToast");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_make01
static int tolua_nodes_wyToast_make01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wyNode",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wyNode* bg = ((wyNode*)  tolua_tousertype(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
  float duration = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   wyToast* tolua_ret = (wyToast*)  wyToast::make(bg,text,duration);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyToast");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyToast_make00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: make of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_make02
static int tolua_nodes_wyToast_make02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
  float duration = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   wyToast* tolua_ret = (wyToast*)  wyToast::make(text,duration);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyToast");
  }
 }
 return 1;
tolua_lerror:
 return tolua_nodes_wyToast_make01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: show of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_show00
static int tolua_nodes_wyToast_show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
  bool immediately = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'show'", NULL);
#endif
  {
   self->show(immediately);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'show'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackground of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getBackground00
static int tolua_nodes_wyToast_getBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackground'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getBackground();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContent of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getContent00
static int tolua_nodes_wyToast_getContent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContent'", NULL);
#endif
  {
   wyNode* tolua_ret = (wyNode*)  self->getContent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"wyNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMargin of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_setMargin00
static int tolua_nodes_wyToast_setMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
  float top = ((float)  tolua_tonumber(tolua_S,2,0));
  float left = ((float)  tolua_tonumber(tolua_S,3,0));
  float right = ((float)  tolua_tonumber(tolua_S,4,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMargin'", NULL);
#endif
  {
   self->setMargin(top,left,right,bottom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLeftMargin of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getLeftMargin00
static int tolua_nodes_wyToast_getLeftMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLeftMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getLeftMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLeftMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRightMargin of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getRightMargin00
static int tolua_nodes_wyToast_getRightMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRightMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRightMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRightMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTopMargin of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getTopMargin00
static int tolua_nodes_wyToast_getTopMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTopMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTopMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTopMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBottomMargin of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_getBottomMargin00
static int tolua_nodes_wyToast_getBottomMargin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBottomMargin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBottomMargin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBottomMargin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setToastPosition of class  wyToast */
#ifndef TOLUA_DISABLE_tolua_nodes_wyToast_setToastPosition00
static int tolua_nodes_wyToast_setToastPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wyToast",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wyToast* self = (wyToast*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setToastPosition'", NULL);
#endif
  {
   self->setToastPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setToastPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_nodes_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"wyTexture2D::LEFT",wyTexture2D::LEFT);
  tolua_constant(tolua_S,"wyTexture2D::CENTER",wyTexture2D::CENTER);
  tolua_constant(tolua_S,"wyTexture2D::RIGHT",wyTexture2D::RIGHT);
  tolua_constant(tolua_S,"wyProgress::RADIAL_CCW",wyProgress::RADIAL_CCW);
  tolua_constant(tolua_S,"wyProgress::RADIAL_CW",wyProgress::RADIAL_CW);
  tolua_constant(tolua_S,"wyProgress::HORIZONTAL_BAR_LR",wyProgress::HORIZONTAL_BAR_LR);
  tolua_constant(tolua_S,"wyProgress::HORIZONTAL_BAR_RL",wyProgress::HORIZONTAL_BAR_RL);
  tolua_constant(tolua_S,"wyProgress::VERTICAL_BAR_BT",wyProgress::VERTICAL_BAR_BT);
  tolua_constant(tolua_S,"wyProgress::VERTICAL_BAR_TB",wyProgress::VERTICAL_BAR_TB);
  tolua_constant(tolua_S,"NORMAL",NORMAL);
  tolua_constant(tolua_S,"BOLD",BOLD);
  tolua_constant(tolua_S,"ITALIC",ITALIC);
  tolua_constant(tolua_S,"BOLD_ITALIC",BOLD_ITALIC);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyActionManager","wyActionManager","wyObject",tolua_collect_wyActionManager);
  #else
  tolua_cclass(tolua_S,"wyActionManager","wyActionManager","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyActionManager");
   tolua_function(tolua_S,"getInstance",tolua_nodes_wyActionManager_getInstance00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyActionManager_delete00);
   tolua_function(tolua_S,"addActionLocked",tolua_nodes_wyActionManager_addActionLocked00);
   tolua_function(tolua_S,"removeActionLocked",tolua_nodes_wyActionManager_removeActionLocked00);
   tolua_function(tolua_S,"removeActionByTagLocked",tolua_nodes_wyActionManager_removeActionByTagLocked00);
   tolua_function(tolua_S,"removeActionsLocked",tolua_nodes_wyActionManager_removeActionsLocked00);
   tolua_function(tolua_S,"removeAllActionsLocked",tolua_nodes_wyActionManager_removeAllActionsLocked00);
   tolua_function(tolua_S,"pauseActionLocked",tolua_nodes_wyActionManager_pauseActionLocked00);
   tolua_function(tolua_S,"resumeActionLocked",tolua_nodes_wyActionManager_resumeActionLocked00);
   tolua_function(tolua_S,"resumeActions",tolua_nodes_wyActionManager_resumeActions00);
   tolua_function(tolua_S,"pauseActions",tolua_nodes_wyActionManager_pauseActions00);
   tolua_function(tolua_S,"getRunningActionCount",tolua_nodes_wyActionManager_getRunningActionCount00);
   tolua_function(tolua_S,"getAction",tolua_nodes_wyActionManager_getAction00);
   tolua_function(tolua_S,"tick",tolua_nodes_wyActionManager_tick00);
   tolua_function(tolua_S,"addPhysicsNode",tolua_nodes_wyActionManager_addPhysicsNode00);
   tolua_function(tolua_S,"removePhysicsNode",tolua_nodes_wyActionManager_removePhysicsNode00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyArrayTileMapAtlas","wyArrayTileMapAtlas","wyTileMapAtlas",tolua_collect_wyArrayTileMapAtlas);
  #else
  tolua_cclass(tolua_S,"wyArrayTileMapAtlas","wyArrayTileMapAtlas","wyTileMapAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyArrayTileMapAtlas");
   tolua_function(tolua_S,"make",tolua_nodes_wyArrayTileMapAtlas_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyArrayTileMapAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyArrayTileMapAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyArrayTileMapAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyArrayTileMapAtlas_delete00);
   tolua_function(tolua_S,"refreshTileValues",tolua_nodes_wyArrayTileMapAtlas_refreshTileValues00);
   tolua_function(tolua_S,"hasTileAt",tolua_nodes_wyArrayTileMapAtlas_hasTileAt00);
   tolua_function(tolua_S,"getHorizontalTileCount",tolua_nodes_wyArrayTileMapAtlas_getHorizontalTileCount00);
   tolua_function(tolua_S,"getVerticalTileCount",tolua_nodes_wyArrayTileMapAtlas_getVerticalTileCount00);
   tolua_function(tolua_S,"tileValueAt",tolua_nodes_wyArrayTileMapAtlas_tileValueAt00);
   tolua_function(tolua_S,"getTiles",tolua_nodes_wyArrayTileMapAtlas_getTiles00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyAtlasLabel","wyAtlasLabel","wyNode",tolua_collect_wyAtlasLabel);
  #else
  tolua_cclass(tolua_S,"wyAtlasLabel","wyAtlasLabel","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyAtlasLabel");
   tolua_function(tolua_S,"make",tolua_nodes_wyAtlasLabel_make00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyAtlasLabel_delete00);
   tolua_function(tolua_S,"getText",tolua_nodes_wyAtlasLabel_getText00);
   tolua_function(tolua_S,"setText",tolua_nodes_wyAtlasLabel_setText00);
   tolua_function(tolua_S,"setLineWidth",tolua_nodes_wyAtlasLabel_setLineWidth00);
   tolua_function(tolua_S,"getLineWidth",tolua_nodes_wyAtlasLabel_getLineWidth00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyCharMap","wyCharMap","wyObject",tolua_collect_wyCharMap);
  #else
  tolua_cclass(tolua_S,"wyCharMap","wyCharMap","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyCharMap");
   tolua_function(tolua_S,"make",tolua_nodes_wyCharMap_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyCharMap_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyCharMap_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyCharMap_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyCharMap_delete00);
   tolua_function(tolua_S,"mapChar",tolua_nodes_wyCharMap_mapChar00);
   tolua_function(tolua_S,"mapChar",tolua_nodes_wyCharMap_mapChar01);
   tolua_function(tolua_S,"mapChar",tolua_nodes_wyCharMap_mapChar02);
   tolua_function(tolua_S,"setSpaceWidth",tolua_nodes_wyCharMap_setSpaceWidth00);
   tolua_function(tolua_S,"getSpaceWidth",tolua_nodes_wyCharMap_getSpaceWidth00);
   tolua_function(tolua_S,"setTabSize",tolua_nodes_wyCharMap_setTabSize00);
   tolua_function(tolua_S,"getTabSize",tolua_nodes_wyCharMap_getTabSize00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyAtlasNode","wyAtlasNode","wyNode",tolua_collect_wyAtlasNode);
  #else
  tolua_cclass(tolua_S,"wyAtlasNode","wyAtlasNode","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyAtlasNode");
   tolua_function(tolua_S,"make",tolua_nodes_wyAtlasNode_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyAtlasNode_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyAtlasNode_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyAtlasNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyAtlasNode_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyButton","wyButton","wyNode",tolua_collect_wyButton);
  #else
  tolua_cclass(tolua_S,"wyButton","wyButton","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyButton");
   tolua_function(tolua_S,"make",tolua_nodes_wyButton_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyButton_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyButton_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyButton_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyButton_delete00);
   tolua_function(tolua_S,"setNormalState",tolua_nodes_wyButton_setNormalState00);
   tolua_function(tolua_S,"setSelectedState",tolua_nodes_wyButton_setSelectedState00);
   tolua_function(tolua_S,"setDisabledState",tolua_nodes_wyButton_setDisabledState00);
   tolua_function(tolua_S,"setFocusedState",tolua_nodes_wyButton_setFocusedState00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyButton_setTexture00);
   tolua_function(tolua_S,"setClickScale",tolua_nodes_wyButton_setClickScale00);
   tolua_function(tolua_S,"getClickScale",tolua_nodes_wyButton_getClickScale00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyColorLayer","wyColorLayer","wyLayer",tolua_collect_wyColorLayer);
  #else
  tolua_cclass(tolua_S,"wyColorLayer","wyColorLayer","wyLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyColorLayer");
   tolua_function(tolua_S,"make",tolua_nodes_wyColorLayer_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyColorLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyColorLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyColorLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyColorLayer_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyColorLayer_setContentSize00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyColorLayer_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyColorLayer_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyColorLayer_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyColorLayer_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyColorLayer_setColor01);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"PROJECTION_2D",PROJECTION_2D);
  tolua_constant(tolua_S,"PROJECTION_3D",PROJECTION_3D);
  tolua_constant(tolua_S,"PROJECTION_CUSTOM",PROJECTION_CUSTOM);
  tolua_constant(tolua_S,"PROJECTION_DEFAULT",PROJECTION_DEFAULT);
  tolua_constant(tolua_S,"DELAY_FASTEST",DELAY_FASTEST);
  tolua_constant(tolua_S,"DELAY_GAME",DELAY_GAME);
  tolua_constant(tolua_S,"DELAY_UI",DELAY_UI);
  tolua_constant(tolua_S,"DELAY_NORMAL",DELAY_NORMAL);
  tolua_cclass(tolua_S,"wyDirectorLifecycleListener","wyDirectorLifecycleListener","",NULL);
  tolua_beginmodule(tolua_S,"wyDirectorLifecycleListener");
   tolua_function(tolua_S,"onSurfaceCreated",tolua_nodes_wyDirectorLifecycleListener_onSurfaceCreated00);
   tolua_function(tolua_S,"onSurfaceChanged",tolua_nodes_wyDirectorLifecycleListener_onSurfaceChanged00);
   tolua_function(tolua_S,"onSurfaceDestroyed",tolua_nodes_wyDirectorLifecycleListener_onSurfaceDestroyed00);
   tolua_function(tolua_S,"onDirectorPaused",tolua_nodes_wyDirectorLifecycleListener_onDirectorPaused00);
   tolua_function(tolua_S,"onDirectorResumed",tolua_nodes_wyDirectorLifecycleListener_onDirectorResumed00);
   tolua_function(tolua_S,"onDirectorEnded",tolua_nodes_wyDirectorLifecycleListener_onDirectorEnded00);
   tolua_function(tolua_S,"onDirectorScreenCaptured",tolua_nodes_wyDirectorLifecycleListener_onDirectorScreenCaptured00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyDirector","wyDirector","wyObject",tolua_collect_wyDirector);
  #else
  tolua_cclass(tolua_S,"wyDirector","wyDirector","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyDirector");
   tolua_function(tolua_S,"getInstance",tolua_nodes_wyDirector_getInstance00);
   tolua_function(tolua_S,"getInstanceNoCreate",tolua_nodes_wyDirector_getInstanceNoCreate00);
   tolua_function(tolua_S,"isEnding",tolua_nodes_wyDirector_isEnding00);
   tolua_function(tolua_S,"setResourceDecoder",tolua_nodes_wyDirector_setResourceDecoder00);
   tolua_function(tolua_S,"printUnreleasedObjects",tolua_nodes_wyDirector_printUnreleasedObjects00);
   tolua_function(tolua_S,"printUnreleasedMemory",tolua_nodes_wyDirector_printUnreleasedMemory00);
   tolua_function(tolua_S,"printMemoryUsage",tolua_nodes_wyDirector_printMemoryUsage00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyDirector_delete00);
   tolua_function(tolua_S,"attachInView",tolua_nodes_wyDirector_attachInView00);
   tolua_function(tolua_S,"attachContext",tolua_nodes_wyDirector_attachContext00);
   tolua_function(tolua_S,"setAccelerometerDelay",tolua_nodes_wyDirector_setAccelerometerDelay00);
   tolua_function(tolua_S,"onSurfaceCreated",tolua_nodes_wyDirector_onSurfaceCreated00);
   tolua_function(tolua_S,"onSurfaceChanged",tolua_nodes_wyDirector_onSurfaceChanged00);
   tolua_function(tolua_S,"onSurfaceDestroyed",tolua_nodes_wyDirector_onSurfaceDestroyed00);
   tolua_function(tolua_S,"setScaleMode",tolua_nodes_wyDirector_setScaleMode00);
   tolua_function(tolua_S,"setBaseSize",tolua_nodes_wyDirector_setBaseSize00);
   tolua_function(tolua_S,"pause",tolua_nodes_wyDirector_pause00);
   tolua_function(tolua_S,"resume",tolua_nodes_wyDirector_resume00);
   tolua_function(tolua_S,"getWindowSize",tolua_nodes_wyDirector_getWindowSize00);
   tolua_function(tolua_S,"getWindowWidth",tolua_nodes_wyDirector_getWindowWidth00);
   tolua_function(tolua_S,"getWindowHeight",tolua_nodes_wyDirector_getWindowHeight00);
   tolua_function(tolua_S,"addLifecycleListener",tolua_nodes_wyDirector_addLifecycleListener00);
   tolua_function(tolua_S,"getGLView",tolua_nodes_wyDirector_getGLView00);
   tolua_function(tolua_S,"getContext",tolua_nodes_wyDirector_getContext00);
   tolua_function(tolua_S,"setShowFPS",tolua_nodes_wyDirector_setShowFPS00);
   tolua_function(tolua_S,"setCalculateFPS",tolua_nodes_wyDirector_setCalculateFPS00);
   tolua_function(tolua_S,"drawFrame",tolua_nodes_wyDirector_drawFrame00);
   tolua_function(tolua_S,"setMaxFrameRate",tolua_nodes_wyDirector_setMaxFrameRate00);
   tolua_function(tolua_S,"runWithScene",tolua_nodes_wyDirector_runWithScene00);
   tolua_function(tolua_S,"popScene",tolua_nodes_wyDirector_popScene00);
   tolua_function(tolua_S,"popSceneWithTransition",tolua_nodes_wyDirector_popSceneWithTransition00);
   tolua_function(tolua_S,"pushScene",tolua_nodes_wyDirector_pushScene00);
   tolua_function(tolua_S,"replaceScene",tolua_nodes_wyDirector_replaceScene00);
   tolua_function(tolua_S,"setNeedCheckTexture",tolua_nodes_wyDirector_setNeedCheckTexture00);
   tolua_function(tolua_S,"getPreviousScene",tolua_nodes_wyDirector_getPreviousScene00);
   tolua_function(tolua_S,"getRunningScene",tolua_nodes_wyDirector_getRunningScene00);
   tolua_function(tolua_S,"isPaused",tolua_nodes_wyDirector_isPaused00);
   tolua_function(tolua_S,"isUIPaused",tolua_nodes_wyDirector_isUIPaused00);
   tolua_function(tolua_S,"pauseUI",tolua_nodes_wyDirector_pauseUI00);
   tolua_function(tolua_S,"resumeUI",tolua_nodes_wyDirector_resumeUI00);
   tolua_function(tolua_S,"getMaxFrameRate",tolua_nodes_wyDirector_getMaxFrameRate00);
   tolua_function(tolua_S,"getProjection",tolua_nodes_wyDirector_getProjection00);
   tolua_function(tolua_S,"isExtensionSupported",tolua_nodes_wyDirector_isExtensionSupported00);
   tolua_function(tolua_S,"isSurfaceCreated",tolua_nodes_wyDirector_isSurfaceCreated00);
   tolua_function(tolua_S,"makeScreenshot",tolua_nodes_wyDirector_makeScreenshot00);
   tolua_function(tolua_S,"makeScreenshot",tolua_nodes_wyDirector_makeScreenshot01);
   tolua_function(tolua_S,"makeScreenshot",tolua_nodes_wyDirector_makeScreenshot02);
   tolua_function(tolua_S,"getCurrentFrameRate",tolua_nodes_wyDirector_getCurrentFrameRate00);
   tolua_function(tolua_S,"isFocusEnabled",tolua_nodes_wyDirector_isFocusEnabled00);
   tolua_function(tolua_S,"setFocusEnabled",tolua_nodes_wyDirector_setFocusEnabled00);
   tolua_function(tolua_S,"setNextDeltaTimeZero",tolua_nodes_wyDirector_setNextDeltaTimeZero00);
   tolua_function(tolua_S,"setTickFactor",tolua_nodes_wyDirector_setTickFactor00);
   tolua_function(tolua_S,"getTickFactor",tolua_nodes_wyDirector_getTickFactor00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyFrame","wyFrame","wyObject",tolua_collect_wyFrame);
  #else
  tolua_cclass(tolua_S,"wyFrame","wyFrame","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyFrame");
   tolua_function(tolua_S,"new",tolua_nodes_wyFrame_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyFrame_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyFrame_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyFrame_delete00);
   tolua_function(tolua_S,"getDuration",tolua_nodes_wyFrame_getDuration00);
   tolua_function(tolua_S,"setDuration",tolua_nodes_wyFrame_setDuration00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyGradientColorLayer","wyGradientColorLayer","wyLayer",tolua_collect_wyGradientColorLayer);
  #else
  tolua_cclass(tolua_S,"wyGradientColorLayer","wyGradientColorLayer","wyLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyGradientColorLayer");
   tolua_function(tolua_S,"make",tolua_nodes_wyGradientColorLayer_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyGradientColorLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyGradientColorLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyGradientColorLayer_new00_local);
   tolua_function(tolua_S,"setDegree",tolua_nodes_wyGradientColorLayer_setDegree00);
   tolua_function(tolua_S,"getDegree",tolua_nodes_wyGradientColorLayer_getDegree00);
   tolua_function(tolua_S,"setFromColor",tolua_nodes_wyGradientColorLayer_setFromColor00);
   tolua_function(tolua_S,"getFromColor",tolua_nodes_wyGradientColorLayer_getFromColor00);
   tolua_function(tolua_S,"setToColor",tolua_nodes_wyGradientColorLayer_setToColor00);
   tolua_function(tolua_S,"getToColor",tolua_nodes_wyGradientColorLayer_getToColor00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyGradientColorLayer_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyGradientColorLayer_setContentSize00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyLabel","wyLabel","wyTextureNode",tolua_collect_wyLabel);
  #else
  tolua_cclass(tolua_S,"wyLabel","wyLabel","wyTextureNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyLabel");
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make02);
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make03);
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make04);
   tolua_function(tolua_S,"make",tolua_nodes_wyLabel_make05);
   tolua_function(tolua_S,"delete",tolua_nodes_wyLabel_delete00);
   tolua_function(tolua_S,"getText",tolua_nodes_wyLabel_getText00);
   tolua_function(tolua_S,"setText",tolua_nodes_wyLabel_setText00);
   tolua_function(tolua_S,"setText",tolua_nodes_wyLabel_setText01);
   tolua_function(tolua_S,"setFontSize",tolua_nodes_wyLabel_setFontSize00);
   tolua_function(tolua_S,"getFontSize",tolua_nodes_wyLabel_getFontSize00);
   tolua_function(tolua_S,"setFontStyle",tolua_nodes_wyLabel_setFontStyle00);
   tolua_function(tolua_S,"getFontStyle",tolua_nodes_wyLabel_getFontStyle00);
   tolua_function(tolua_S,"setFontName",tolua_nodes_wyLabel_setFontName00);
   tolua_function(tolua_S,"getFontName",tolua_nodes_wyLabel_getFontName00);
   tolua_function(tolua_S,"setFontPath",tolua_nodes_wyLabel_setFontPath00);
   tolua_function(tolua_S,"getFontPath",tolua_nodes_wyLabel_getFontPath00);
   tolua_function(tolua_S,"setLineWidth",tolua_nodes_wyLabel_setLineWidth00);
   tolua_function(tolua_S,"getLineWidth",tolua_nodes_wyLabel_getLineWidth00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyLayer","wyLayer","wyNode",tolua_collect_wyLayer);
  #else
  tolua_cclass(tolua_S,"wyLayer","wyLayer","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyLayer");
   tolua_function(tolua_S,"make",tolua_nodes_wyLayer_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyLayer_delete00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"DEFAULT_PADDING",DEFAULT_PADDING);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenu","wyMenu","wyLayer",tolua_collect_wyMenu);
  #else
  tolua_cclass(tolua_S,"wyMenu","wyMenu","wyLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenu");
   tolua_function(tolua_S,"make",tolua_nodes_wyMenu_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMenu_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMenu_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMenu_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenu_delete00);
   tolua_function(tolua_S,"touchesBegan",tolua_nodes_wyMenu_touchesBegan00);
   tolua_function(tolua_S,"touchesMoved",tolua_nodes_wyMenu_touchesMoved00);
   tolua_function(tolua_S,"touchesEnded",tolua_nodes_wyMenu_touchesEnded00);
   tolua_function(tolua_S,"touchesCancelled",tolua_nodes_wyMenu_touchesCancelled00);
   tolua_function(tolua_S,"hitTest",tolua_nodes_wyMenu_hitTest00);
   tolua_function(tolua_S,"alignItemsVertically",tolua_nodes_wyMenu_alignItemsVertically00);
   tolua_function(tolua_S,"alignItemsHorizontally",tolua_nodes_wyMenu_alignItemsHorizontally00);
   tolua_function(tolua_S,"alignItemsInColumns",tolua_nodes_wyMenu_alignItemsInColumns00);
   tolua_function(tolua_S,"alignItemsInRows",tolua_nodes_wyMenu_alignItemsInRows00);
   tolua_function(tolua_S,"addMenuItem",tolua_nodes_wyMenu_addMenuItem00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"DEFAULT_FONT_SIZE",DEFAULT_FONT_SIZE);
  tolua_constant(tolua_S,"TAG_CURRENT_ITEM",TAG_CURRENT_ITEM);
  tolua_constant(tolua_S,"TAG_ZOOM_ACTION",TAG_ZOOM_ACTION);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenuItem","wyMenuItem","wyNode",tolua_collect_wyMenuItem);
  #else
  tolua_cclass(tolua_S,"wyMenuItem","wyMenuItem","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenuItem");
   tolua_function(tolua_S,"make",tolua_nodes_wyMenuItem_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMenuItem_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMenuItem_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMenuItem_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenuItem_delete00);
   tolua_function(tolua_S,"beforeInvoke",tolua_nodes_wyMenuItem_beforeInvoke00);
   tolua_function(tolua_S,"setClickScale",tolua_nodes_wyMenuItem_setClickScale00);
   tolua_function(tolua_S,"getClickScale",tolua_nodes_wyMenuItem_getClickScale00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenuItemAtlasLabel","wyMenuItemAtlasLabel","wyMenuItem",tolua_collect_wyMenuItemAtlasLabel);
  #else
  tolua_cclass(tolua_S,"wyMenuItemAtlasLabel","wyMenuItemAtlasLabel","wyMenuItem",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenuItemAtlasLabel");
   tolua_function(tolua_S,"make",tolua_nodes_wyMenuItemAtlasLabel_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMenuItemAtlasLabel_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMenuItemAtlasLabel_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMenuItemAtlasLabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenuItemAtlasLabel_delete00);
   tolua_function(tolua_S,"setSelected",tolua_nodes_wyMenuItemAtlasLabel_setSelected00);
   tolua_function(tolua_S,"setEnabled",tolua_nodes_wyMenuItemAtlasLabel_setEnabled00);
   tolua_function(tolua_S,"beforeInvoke",tolua_nodes_wyMenuItemAtlasLabel_beforeInvoke00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyMenuItemAtlasLabel_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyMenuItemAtlasLabel_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyMenuItemAtlasLabel_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemAtlasLabel_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemAtlasLabel_setColor01);
   tolua_function(tolua_S,"setDisabledColor",tolua_nodes_wyMenuItemAtlasLabel_setDisabledColor00);
   tolua_function(tolua_S,"getDisabledColor",tolua_nodes_wyMenuItemAtlasLabel_getDisabledColor00);
   tolua_function(tolua_S,"setLabel",tolua_nodes_wyMenuItemAtlasLabel_setLabel00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenuItemLabel","wyMenuItemLabel","wyMenuItem",tolua_collect_wyMenuItemLabel);
  #else
  tolua_cclass(tolua_S,"wyMenuItemLabel","wyMenuItemLabel","wyMenuItem",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenuItemLabel");
   tolua_function(tolua_S,"make",tolua_nodes_wyMenuItemLabel_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMenuItemLabel_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMenuItemLabel_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMenuItemLabel_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenuItemLabel_delete00);
   tolua_function(tolua_S,"setSelected",tolua_nodes_wyMenuItemLabel_setSelected00);
   tolua_function(tolua_S,"setEnabled",tolua_nodes_wyMenuItemLabel_setEnabled00);
   tolua_function(tolua_S,"beforeInvoke",tolua_nodes_wyMenuItemLabel_beforeInvoke00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyMenuItemLabel_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyMenuItemLabel_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyMenuItemLabel_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemLabel_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemLabel_setColor01);
   tolua_function(tolua_S,"setLabel",tolua_nodes_wyMenuItemLabel_setLabel00);
   tolua_function(tolua_S,"setDisabledColor",tolua_nodes_wyMenuItemLabel_setDisabledColor00);
   tolua_function(tolua_S,"getDisabledColor",tolua_nodes_wyMenuItemLabel_getDisabledColor00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenuItemSprite","wyMenuItemSprite","wyMenuItem",tolua_collect_wyMenuItemSprite);
  #else
  tolua_cclass(tolua_S,"wyMenuItemSprite","wyMenuItemSprite","wyMenuItem",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenuItemSprite");
   tolua_function(tolua_S,"make",tolua_nodes_wyMenuItemSprite_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMenuItemSprite_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMenuItemSprite_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMenuItemSprite_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenuItemSprite_delete00);
   tolua_function(tolua_S,"setRotation",tolua_nodes_wyMenuItemSprite_setRotation00);
   tolua_function(tolua_S,"setScale",tolua_nodes_wyMenuItemSprite_setScale00);
   tolua_function(tolua_S,"setScaleX",tolua_nodes_wyMenuItemSprite_setScaleX00);
   tolua_function(tolua_S,"setScaleY",tolua_nodes_wyMenuItemSprite_setScaleY00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyMenuItemSprite_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyMenuItemSprite_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyMenuItemSprite_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemSprite_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemSprite_setColor01);
   tolua_function(tolua_S,"setSelected",tolua_nodes_wyMenuItemSprite_setSelected00);
   tolua_function(tolua_S,"setEnabled",tolua_nodes_wyMenuItemSprite_setEnabled00);
   tolua_function(tolua_S,"setNormalSprite",tolua_nodes_wyMenuItemSprite_setNormalSprite00);
   tolua_function(tolua_S,"getNormalSprite",tolua_nodes_wyMenuItemSprite_getNormalSprite00);
   tolua_function(tolua_S,"setSelectedSprite",tolua_nodes_wyMenuItemSprite_setSelectedSprite00);
   tolua_function(tolua_S,"getSelectedSprite",tolua_nodes_wyMenuItemSprite_getSelectedSprite00);
   tolua_function(tolua_S,"setDisabledSprite",tolua_nodes_wyMenuItemSprite_setDisabledSprite00);
   tolua_function(tolua_S,"getDisabledSprite",tolua_nodes_wyMenuItemSprite_getDisabledSprite00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMenuItemToggle","wyMenuItemToggle","wyMenuItem",tolua_collect_wyMenuItemToggle);
  #else
  tolua_cclass(tolua_S,"wyMenuItemToggle","wyMenuItemToggle","wyMenuItem",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMenuItemToggle");
   tolua_function(tolua_S,"delete",tolua_nodes_wyMenuItemToggle_delete00);
   tolua_function(tolua_S,"setSelected",tolua_nodes_wyMenuItemToggle_setSelected00);
   tolua_function(tolua_S,"setEnabled",tolua_nodes_wyMenuItemToggle_setEnabled00);
   tolua_function(tolua_S,"beforeInvoke",tolua_nodes_wyMenuItemToggle_beforeInvoke00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyMenuItemToggle_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyMenuItemToggle_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyMenuItemToggle_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemToggle_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyMenuItemToggle_setColor01);
   tolua_function(tolua_S,"setSelectedIndex",tolua_nodes_wyMenuItemToggle_setSelectedIndex00);
   tolua_function(tolua_S,"getSelectedIndex",tolua_nodes_wyMenuItemToggle_getSelectedIndex00);
   tolua_function(tolua_S,"getMenuItems",tolua_nodes_wyMenuItemToggle_getMenuItems00);
   tolua_function(tolua_S,"addMenuItem",tolua_nodes_wyMenuItemToggle_addMenuItem00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"MS_STYLE_STRIP",MS_STYLE_STRIP);
  tolua_constant(tolua_S,"MS_STYLE_SPOT",MS_STYLE_SPOT);
  tolua_constant(tolua_S,"MS_STYLE_BLADE",MS_STYLE_BLADE);
  tolua_constant(tolua_S,"MS_STYLE_LINE",MS_STYLE_LINE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMotionStreak","wyMotionStreak","wyNode",tolua_collect_wyMotionStreak);
  #else
  tolua_cclass(tolua_S,"wyMotionStreak","wyMotionStreak","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMotionStreak");
   tolua_function(tolua_S,"make",tolua_nodes_wyMotionStreak_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMotionStreak_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMotionStreak_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMotionStreak_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMotionStreak_delete00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyMotionStreak_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyMotionStreak_setTexture00);
   tolua_function(tolua_S,"getRibbon",tolua_nodes_wyMotionStreak_getRibbon00);
   tolua_function(tolua_S,"getLastLocation",tolua_nodes_wyMotionStreak_getLastLocation00);
   tolua_function(tolua_S,"getCurrentLocation",tolua_nodes_wyMotionStreak_getCurrentLocation00);
   tolua_function(tolua_S,"setPaused",tolua_nodes_wyMotionStreak_setPaused00);
   tolua_function(tolua_S,"isPaused",tolua_nodes_wyMotionStreak_isPaused00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wyMotionStreak_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wyMotionStreak_reset00);
   tolua_function(tolua_S,"getStyle",tolua_nodes_wyMotionStreak_getStyle00);
   tolua_function(tolua_S,"setSegmentThreshold",tolua_nodes_wyMotionStreak_setSegmentThreshold00);
   tolua_function(tolua_S,"getSegmentThreshold",tolua_nodes_wyMotionStreak_getSegmentThreshold00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyMultiplexLayer","wyMultiplexLayer","wyLayer",tolua_collect_wyMultiplexLayer);
  #else
  tolua_cclass(tolua_S,"wyMultiplexLayer","wyMultiplexLayer","wyLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyMultiplexLayer");
   tolua_function(tolua_S,"make",tolua_nodes_wyMultiplexLayer_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyMultiplexLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyMultiplexLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyMultiplexLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyMultiplexLayer_delete00);
   tolua_function(tolua_S,"addLayer",tolua_nodes_wyMultiplexLayer_addLayer00);
   tolua_function(tolua_S,"removeLayer",tolua_nodes_wyMultiplexLayer_removeLayer00);
   tolua_function(tolua_S,"switchTo",tolua_nodes_wyMultiplexLayer_switchTo00);
   tolua_function(tolua_S,"getEnabledLayer",tolua_nodes_wyMultiplexLayer_getEnabledLayer00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyNinePatchSprite","wyNinePatchSprite","wyNode",tolua_collect_wyNinePatchSprite);
  #else
  tolua_cclass(tolua_S,"wyNinePatchSprite","wyNinePatchSprite","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyNinePatchSprite");
   tolua_function(tolua_S,"make",tolua_nodes_wyNinePatchSprite_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyNinePatchSprite_make01);
   tolua_function(tolua_S,"delete",tolua_nodes_wyNinePatchSprite_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyNinePatchSprite_setContentSize00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyNinePatchSprite_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyNinePatchSprite_setTexture00);
   tolua_function(tolua_S,"setTextureRect",tolua_nodes_wyNinePatchSprite_setTextureRect00);
   tolua_function(tolua_S,"getTextureRect",tolua_nodes_wyNinePatchSprite_getTextureRect00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"INVALID_TAG",INVALID_TAG);
  tolua_cclass(tolua_S,"wyNodePositionCallback","wyNodePositionCallback","",NULL);
  tolua_beginmodule(tolua_S,"wyNodePositionCallback");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyNode","wyNode","wyObject",NULL);
  tolua_beginmodule(tolua_S,"wyNode");
   tolua_function(tolua_S,"make",tolua_nodes_wyNode_make00);
   tolua_function(tolua_S,"onEnter",tolua_nodes_wyNode_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_nodes_wyNode_onExit00);
   tolua_function(tolua_S,"onEnterTransitionDidFinish",tolua_nodes_wyNode_onEnterTransitionDidFinish00);
   tolua_function(tolua_S,"onAttachToParent",tolua_nodes_wyNode_onAttachToParent00);
   tolua_function(tolua_S,"onDetachFromParent",tolua_nodes_wyNode_onDetachFromParent00);
   tolua_function(tolua_S,"cleanup",tolua_nodes_wyNode_cleanup00);
   tolua_function(tolua_S,"setAnchor",tolua_nodes_wyNode_setAnchor00);
   tolua_function(tolua_S,"setAnchorX",tolua_nodes_wyNode_setAnchorX00);
   tolua_function(tolua_S,"setAnchorY",tolua_nodes_wyNode_setAnchorY00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyNode_setContentSize00);
   tolua_function(tolua_S,"setPosition",tolua_nodes_wyNode_setPosition00);
   tolua_function(tolua_S,"translate",tolua_nodes_wyNode_translate00);
   tolua_function(tolua_S,"setRotation",tolua_nodes_wyNode_setRotation00);
   tolua_function(tolua_S,"setScale",tolua_nodes_wyNode_setScale00);
   tolua_function(tolua_S,"setScaleX",tolua_nodes_wyNode_setScaleX00);
   tolua_function(tolua_S,"setScaleY",tolua_nodes_wyNode_setScaleY00);
   tolua_function(tolua_S,"setSelected",tolua_nodes_wyNode_setSelected00);
   tolua_function(tolua_S,"setVertexZ",tolua_nodes_wyNode_setVertexZ00);
   tolua_function(tolua_S,"setVisible",tolua_nodes_wyNode_setVisible00);
   tolua_function(tolua_S,"setFocused",tolua_nodes_wyNode_setFocused00);
   tolua_function(tolua_S,"setEnabled",tolua_nodes_wyNode_setEnabled00);
   tolua_function(tolua_S,"accelerometerChanged",tolua_nodes_wyNode_accelerometerChanged00);
   tolua_function(tolua_S,"keyDown",tolua_nodes_wyNode_keyDown00);
   tolua_function(tolua_S,"keyUp",tolua_nodes_wyNode_keyUp00);
   tolua_function(tolua_S,"keyMultiple",tolua_nodes_wyNode_keyMultiple00);
   tolua_function(tolua_S,"touchesBegan",tolua_nodes_wyNode_touchesBegan00);
   tolua_function(tolua_S,"touchesMoved",tolua_nodes_wyNode_touchesMoved00);
   tolua_function(tolua_S,"touchesEnded",tolua_nodes_wyNode_touchesEnded00);
   tolua_function(tolua_S,"touchesCancelled",tolua_nodes_wyNode_touchesCancelled00);
   tolua_function(tolua_S,"touchesPointerBegan",tolua_nodes_wyNode_touchesPointerBegan00);
   tolua_function(tolua_S,"touchesPointerEnded",tolua_nodes_wyNode_touchesPointerEnded00);
   tolua_function(tolua_S,"onDoubleTap",tolua_nodes_wyNode_onDoubleTap00);
   tolua_function(tolua_S,"onDoubleTapEvent",tolua_nodes_wyNode_onDoubleTapEvent00);
   tolua_function(tolua_S,"onSingleTapConfirmed",tolua_nodes_wyNode_onSingleTapConfirmed00);
   tolua_function(tolua_S,"onDown",tolua_nodes_wyNode_onDown00);
   tolua_function(tolua_S,"onFling",tolua_nodes_wyNode_onFling00);
   tolua_function(tolua_S,"onLongPress",tolua_nodes_wyNode_onLongPress00);
   tolua_function(tolua_S,"onScroll",tolua_nodes_wyNode_onScroll00);
   tolua_function(tolua_S,"onShowPress",tolua_nodes_wyNode_onShowPress00);
   tolua_function(tolua_S,"onSingleTapUp",tolua_nodes_wyNode_onSingleTapUp00);
   tolua_function(tolua_S,"hitTest",tolua_nodes_wyNode_hitTest00);
   tolua_function(tolua_S,"setRelativeAnchorPoint",tolua_nodes_wyNode_setRelativeAnchorPoint00);
   tolua_function(tolua_S,"updateNodeToParentTransform",tolua_nodes_wyNode_updateNodeToParentTransform00);
   tolua_function(tolua_S,"updateParentToNodeTransform",tolua_nodes_wyNode_updateParentToNodeTransform00);
   tolua_function(tolua_S,"getNodeToWorldTransform",tolua_nodes_wyNode_getNodeToWorldTransform00);
   tolua_function(tolua_S,"getTransformMatrix",tolua_nodes_wyNode_getTransformMatrix00);
   tolua_function(tolua_S,"getWorldToNodeTransform",tolua_nodes_wyNode_getWorldToNodeTransform00);
   tolua_function(tolua_S,"setTransformDirty",tolua_nodes_wyNode_setTransformDirty00);
   tolua_function(tolua_S,"getScale",tolua_nodes_wyNode_getScale00);
   tolua_function(tolua_S,"getScaleX",tolua_nodes_wyNode_getScaleX00);
   tolua_function(tolua_S,"getScaleY",tolua_nodes_wyNode_getScaleY00);
   tolua_function(tolua_S,"setGrid",tolua_nodes_wyNode_setGrid00);
   tolua_function(tolua_S,"addChildLocked",tolua_nodes_wyNode_addChildLocked00);
   tolua_function(tolua_S,"addChildLocked",tolua_nodes_wyNode_addChildLocked01);
   tolua_function(tolua_S,"addChildLocked",tolua_nodes_wyNode_addChildLocked02);
   tolua_function(tolua_S,"addChild",tolua_nodes_wyNode_addChild00);
   tolua_function(tolua_S,"reorderChild",tolua_nodes_wyNode_reorderChild00);
   tolua_function(tolua_S,"removeAllChildrenLocked",tolua_nodes_wyNode_removeAllChildrenLocked00);
   tolua_function(tolua_S,"removeAllChildren",tolua_nodes_wyNode_removeAllChildren00);
   tolua_function(tolua_S,"removeChildLocked",tolua_nodes_wyNode_removeChildLocked00);
   tolua_function(tolua_S,"removeChildByTagLocked",tolua_nodes_wyNode_removeChildByTagLocked00);
   tolua_function(tolua_S,"removeChild",tolua_nodes_wyNode_removeChild00);
   tolua_function(tolua_S,"reorderChildLocked",tolua_nodes_wyNode_reorderChildLocked00);
   tolua_function(tolua_S,"bringToFront",tolua_nodes_wyNode_bringToFront00);
   tolua_function(tolua_S,"bringToFrontLocked",tolua_nodes_wyNode_bringToFrontLocked00);
   tolua_function(tolua_S,"bringToBack",tolua_nodes_wyNode_bringToBack00);
   tolua_function(tolua_S,"bringToBackLocked",tolua_nodes_wyNode_bringToBackLocked00);
   tolua_function(tolua_S,"getChildByTagLocked",tolua_nodes_wyNode_getChildByTagLocked00);
   tolua_function(tolua_S,"getChildByTag",tolua_nodes_wyNode_getChildByTag00);
   tolua_function(tolua_S,"getFirstChild",tolua_nodes_wyNode_getFirstChild00);
   tolua_function(tolua_S,"setVelocity",tolua_nodes_wyNode_setVelocity00);
   tolua_function(tolua_S,"setAcceleration",tolua_nodes_wyNode_setAcceleration00);
   tolua_function(tolua_S,"setClipRect",tolua_nodes_wyNode_setClipRect00);
   tolua_function(tolua_S,"getClipRect",tolua_nodes_wyNode_getClipRect00);
   tolua_function(tolua_S,"setAccelerationX",tolua_nodes_wyNode_setAccelerationX00);
   tolua_function(tolua_S,"setAccelerationY",tolua_nodes_wyNode_setAccelerationY00);
   tolua_function(tolua_S,"setVelocityX",tolua_nodes_wyNode_setVelocityX00);
   tolua_function(tolua_S,"setVelocityY",tolua_nodes_wyNode_setVelocityY00);
   tolua_function(tolua_S,"getAbsolutePosition",tolua_nodes_wyNode_getAbsolutePosition00);
   tolua_function(tolua_S,"runAction",tolua_nodes_wyNode_runAction00);
   tolua_function(tolua_S,"stopAction",tolua_nodes_wyNode_stopAction00);
   tolua_function(tolua_S,"stopAllActions",tolua_nodes_wyNode_stopAllActions00);
   tolua_function(tolua_S,"pauseAllActions",tolua_nodes_wyNode_pauseAllActions00);
   tolua_function(tolua_S,"resumeAllActions",tolua_nodes_wyNode_resumeAllActions00);
   tolua_function(tolua_S,"pauseAction",tolua_nodes_wyNode_pauseAction00);
   tolua_function(tolua_S,"resumeAction",tolua_nodes_wyNode_resumeAction00);
   tolua_function(tolua_S,"getAction",tolua_nodes_wyNode_getAction00);
   tolua_function(tolua_S,"hasRunningAction",tolua_nodes_wyNode_hasRunningAction00);
   tolua_function(tolua_S,"worldToNodeSpace",tolua_nodes_wyNode_worldToNodeSpace00);
   tolua_function(tolua_S,"worldToNodeSpaceAR",tolua_nodes_wyNode_worldToNodeSpaceAR00);
   tolua_function(tolua_S,"nodeToWorldSpace",tolua_nodes_wyNode_nodeToWorldSpace00);
   tolua_function(tolua_S,"nodeToWorldSpaceAR",tolua_nodes_wyNode_nodeToWorldSpaceAR00);
   tolua_function(tolua_S,"parentToNodeSpace",tolua_nodes_wyNode_parentToNodeSpace00);
   tolua_function(tolua_S,"parentToNodeSpaceAR",tolua_nodes_wyNode_parentToNodeSpaceAR00);
   tolua_function(tolua_S,"nodeToParentSpace",tolua_nodes_wyNode_nodeToParentSpace00);
   tolua_function(tolua_S,"nodeToParentSpaceAR",tolua_nodes_wyNode_nodeToParentSpaceAR00);
   tolua_function(tolua_S,"getBoundingBox",tolua_nodes_wyNode_getBoundingBox00);
   tolua_function(tolua_S,"getBoundingBoxRelativeToParent",tolua_nodes_wyNode_getBoundingBoxRelativeToParent00);
   tolua_function(tolua_S,"getBoundingBoxRelativeToWorld",tolua_nodes_wyNode_getBoundingBoxRelativeToWorld00);
   tolua_function(tolua_S,"setAccelerometerEnabled",tolua_nodes_wyNode_setAccelerometerEnabled00);
   tolua_function(tolua_S,"setKeyEnabled",tolua_nodes_wyNode_setKeyEnabled00);
   tolua_function(tolua_S,"setTouchEnabled",tolua_nodes_wyNode_setTouchEnabled00);
   tolua_function(tolua_S,"setDoubleTapEnabled",tolua_nodes_wyNode_setDoubleTapEnabled00);
   tolua_function(tolua_S,"setGestureEnabled",tolua_nodes_wyNode_setGestureEnabled00);
   tolua_function(tolua_S,"isTouchEnabled",tolua_nodes_wyNode_isTouchEnabled00);
   tolua_function(tolua_S,"isKeyEnabled",tolua_nodes_wyNode_isKeyEnabled00);
   tolua_function(tolua_S,"isAccelerometerEnabled",tolua_nodes_wyNode_isAccelerometerEnabled00);
   tolua_function(tolua_S,"isGestureEnabled",tolua_nodes_wyNode_isGestureEnabled00);
   tolua_function(tolua_S,"isDoubleTabEnabled",tolua_nodes_wyNode_isDoubleTabEnabled00);
   tolua_function(tolua_S,"getAnchorPointX",tolua_nodes_wyNode_getAnchorPointX00);
   tolua_function(tolua_S,"getAnchorY",tolua_nodes_wyNode_getAnchorY00);
   tolua_function(tolua_S,"getAnchorX",tolua_nodes_wyNode_getAnchorX00);
   tolua_function(tolua_S,"getAnchorY",tolua_nodes_wyNode_getAnchorY01);
   tolua_function(tolua_S,"getCamera",tolua_nodes_wyNode_getCamera00);
   tolua_function(tolua_S,"hasCamera",tolua_nodes_wyNode_hasCamera00);
   tolua_function(tolua_S,"getGrid",tolua_nodes_wyNode_getGrid00);
   tolua_function(tolua_S,"isVisible",tolua_nodes_wyNode_isVisible00);
   tolua_function(tolua_S,"isFocused",tolua_nodes_wyNode_isFocused00);
   tolua_function(tolua_S,"isVisibleFromRoot",tolua_nodes_wyNode_isVisibleFromRoot00);
   tolua_function(tolua_S,"isSelected",tolua_nodes_wyNode_isSelected00);
   tolua_function(tolua_S,"isEnabled",tolua_nodes_wyNode_isEnabled00);
   tolua_function(tolua_S,"isEnabledFromRoot",tolua_nodes_wyNode_isEnabledFromRoot00);
   tolua_function(tolua_S,"getVertexZ",tolua_nodes_wyNode_getVertexZ00);
   tolua_function(tolua_S,"getRotation",tolua_nodes_wyNode_getRotation00);
   tolua_function(tolua_S,"getPositionX",tolua_nodes_wyNode_getPositionX00);
   tolua_function(tolua_S,"getPositionY",tolua_nodes_wyNode_getPositionY00);
   tolua_function(tolua_S,"getOriginX",tolua_nodes_wyNode_getOriginX00);
   tolua_function(tolua_S,"getOriginY",tolua_nodes_wyNode_getOriginY00);
   tolua_function(tolua_S,"isRelativeAnchorPoint",tolua_nodes_wyNode_isRelativeAnchorPoint00);
   tolua_function(tolua_S,"isRunning",tolua_nodes_wyNode_isRunning00);
   tolua_function(tolua_S,"getWidth",tolua_nodes_wyNode_getWidth00);
   tolua_function(tolua_S,"getHeight",tolua_nodes_wyNode_getHeight00);
   tolua_function(tolua_S,"getVelocityX",tolua_nodes_wyNode_getVelocityX00);
   tolua_function(tolua_S,"getVelocityY",tolua_nodes_wyNode_getVelocityY00);
   tolua_function(tolua_S,"getVelocity",tolua_nodes_wyNode_getVelocity00);
   tolua_function(tolua_S,"getAccelerationX",tolua_nodes_wyNode_getAccelerationX00);
   tolua_function(tolua_S,"getAccelerationY",tolua_nodes_wyNode_getAccelerationY00);
   tolua_function(tolua_S,"getAcceleration",tolua_nodes_wyNode_getAcceleration00);
   tolua_function(tolua_S,"getContentSize",tolua_nodes_wyNode_getContentSize00);
   tolua_function(tolua_S,"getChildren",tolua_nodes_wyNode_getChildren00);
   tolua_function(tolua_S,"getChildAt",tolua_nodes_wyNode_getChildAt00);
   tolua_function(tolua_S,"getChildCount",tolua_nodes_wyNode_getChildCount00);
   tolua_function(tolua_S,"getParent",tolua_nodes_wyNode_getParent00);
   tolua_function(tolua_S,"setParent",tolua_nodes_wyNode_setParent00);
   tolua_function(tolua_S,"setTag",tolua_nodes_wyNode_setTag00);
   tolua_function(tolua_S,"getTag",tolua_nodes_wyNode_getTag00);
   tolua_function(tolua_S,"setZOrder",tolua_nodes_wyNode_setZOrder00);
   tolua_function(tolua_S,"getZOrder",tolua_nodes_wyNode_getZOrder00);
   tolua_function(tolua_S,"scheduleLocked",tolua_nodes_wyNode_scheduleLocked00);
   tolua_function(tolua_S,"unscheduleLocked",tolua_nodes_wyNode_unscheduleLocked00);
   tolua_function(tolua_S,"isNoDraw",tolua_nodes_wyNode_isNoDraw00);
   tolua_function(tolua_S,"setNoDraw",tolua_nodes_wyNode_setNoDraw00);
   tolua_function(tolua_S,"setDownSelector",tolua_nodes_wyNode_setDownSelector00);
   tolua_function(tolua_S,"getDownSelector",tolua_nodes_wyNode_getDownSelector00);
   tolua_function(tolua_S,"setUpSelector",tolua_nodes_wyNode_setUpSelector00);
   tolua_function(tolua_S,"getUpSelector",tolua_nodes_wyNode_getUpSelector00);
   tolua_function(tolua_S,"setMoveOutSelector",tolua_nodes_wyNode_setMoveOutSelector00);
   tolua_function(tolua_S,"getMoveOutSelector",tolua_nodes_wyNode_getMoveOutSelector00);
   tolua_function(tolua_S,"addAnimation",tolua_nodes_wyNode_addAnimation00);
   tolua_function(tolua_S,"getAnimationById",tolua_nodes_wyNode_getAnimationById00);
   tolua_function(tolua_S,"getDisplayFrame",tolua_nodes_wyNode_getDisplayFrame00);
   tolua_function(tolua_S,"isFrameDisplayed",tolua_nodes_wyNode_isFrameDisplayed00);
   tolua_function(tolua_S,"setDisplayFrame",tolua_nodes_wyNode_setDisplayFrame00);
   tolua_function(tolua_S,"setDisplayFrameById",tolua_nodes_wyNode_setDisplayFrameById00);
   tolua_function(tolua_S,"getText",tolua_nodes_wyNode_getText00);
   tolua_function(tolua_S,"setText",tolua_nodes_wyNode_setText00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyNode_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyNode_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyNode_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyNode_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyNode_setColor01);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyNode_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyNode_setTexture00);
   tolua_function(tolua_S,"sizeToFit",tolua_nodes_wyNode_sizeToFit00);
   tolua_function(tolua_S,"enlargeNode",tolua_nodes_wyNode_enlargeNode00);
   tolua_function(tolua_S,"javaRelease",tolua_nodes_wyNode_javaRelease00);
   tolua_function(tolua_S,"setTouchPriority",tolua_nodes_wyNode_setTouchPriority00);
   tolua_function(tolua_S,"setKeyPriority",tolua_nodes_wyNode_setKeyPriority00);
   tolua_function(tolua_S,"setGesturePriority",tolua_nodes_wyNode_setGesturePriority00);
   tolua_function(tolua_S,"setDoubleTapPriority",tolua_nodes_wyNode_setDoubleTapPriority00);
   tolua_function(tolua_S,"setAccelerometerPriority",tolua_nodes_wyNode_setAccelerometerPriority00);
   tolua_function(tolua_S,"getTouchPriority",tolua_nodes_wyNode_getTouchPriority00);
   tolua_function(tolua_S,"getKeyPriority",tolua_nodes_wyNode_getKeyPriority00);
   tolua_function(tolua_S,"getGesturePriority",tolua_nodes_wyNode_getGesturePriority00);
   tolua_function(tolua_S,"getDoubleTapPriority",tolua_nodes_wyNode_getDoubleTapPriority00);
   tolua_function(tolua_S,"getAccelerometerPriority",tolua_nodes_wyNode_getAccelerometerPriority00);
   tolua_function(tolua_S,"setPositionCallback",tolua_nodes_wyNode_setPositionCallback00);
   tolua_function(tolua_S,"isAncestor",tolua_nodes_wyNode_isAncestor00);
   tolua_function(tolua_S,"setMultiTouchClickable",tolua_nodes_wyNode_setMultiTouchClickable00);
   tolua_function(tolua_S,"isMultiTouchClickable",tolua_nodes_wyNode_isMultiTouchClickable00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyParallaxNode","wyParallaxNode","wyNode",tolua_collect_wyParallaxNode);
  #else
  tolua_cclass(tolua_S,"wyParallaxNode","wyParallaxNode","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyParallaxNode");
   tolua_function(tolua_S,"make",tolua_nodes_wyParallaxNode_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyParallaxNode_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyParallaxNode_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyParallaxNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyParallaxNode_delete00);
   tolua_function(tolua_S,"addChild",tolua_nodes_wyParallaxNode_addChild00);
   tolua_function(tolua_S,"removeAllChildren",tolua_nodes_wyParallaxNode_removeAllChildren00);
   tolua_function(tolua_S,"removeChild",tolua_nodes_wyParallaxNode_removeChild00);
   tolua_function(tolua_S,"offsetBy",tolua_nodes_wyParallaxNode_offsetBy00);
   tolua_function(tolua_S,"addChild",tolua_nodes_wyParallaxNode_addChild01);
   tolua_function(tolua_S,"fling",tolua_nodes_wyParallaxNode_fling00);
   tolua_function(tolua_S,"stopFling",tolua_nodes_wyParallaxNode_stopFling00);
   tolua_function(tolua_S,"getOffsetX",tolua_nodes_wyParallaxNode_getOffsetX00);
   tolua_function(tolua_S,"getOffsetY",tolua_nodes_wyParallaxNode_getOffsetY00);
   tolua_function(tolua_S,"setMinX",tolua_nodes_wyParallaxNode_setMinX00);
   tolua_function(tolua_S,"setMinY",tolua_nodes_wyParallaxNode_setMinY00);
   tolua_function(tolua_S,"getMinX",tolua_nodes_wyParallaxNode_getMinX00);
   tolua_function(tolua_S,"getMinY",tolua_nodes_wyParallaxNode_getMinY00);
   tolua_function(tolua_S,"setMaxX",tolua_nodes_wyParallaxNode_setMaxX00);
   tolua_function(tolua_S,"setMaxY",tolua_nodes_wyParallaxNode_setMaxY00);
   tolua_function(tolua_S,"getMaxX",tolua_nodes_wyParallaxNode_getMaxX00);
   tolua_function(tolua_S,"getMaxY",tolua_nodes_wyParallaxNode_getMaxY00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyProgressTimer","wyProgressTimer","wyNode",tolua_collect_wyProgressTimer);
  #else
  tolua_cclass(tolua_S,"wyProgressTimer","wyProgressTimer","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyProgressTimer");
   tolua_function(tolua_S,"make",tolua_nodes_wyProgressTimer_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyProgressTimer_make01);
   tolua_function(tolua_S,"delete",tolua_nodes_wyProgressTimer_delete00);
   tolua_function(tolua_S,"setPercentage",tolua_nodes_wyProgressTimer_setPercentage00);
   tolua_function(tolua_S,"getPercentage",tolua_nodes_wyProgressTimer_getPercentage00);
   tolua_function(tolua_S,"increase",tolua_nodes_wyProgressTimer_increase00);
   tolua_function(tolua_S,"setSprite",tolua_nodes_wyProgressTimer_setSprite00);
   tolua_function(tolua_S,"setStyle",tolua_nodes_wyProgressTimer_setStyle00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyRenderTexture","wyRenderTexture","wyNode",tolua_collect_wyRenderTexture);
  #else
  tolua_cclass(tolua_S,"wyRenderTexture","wyRenderTexture","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyRenderTexture");
   tolua_function(tolua_S,"make",tolua_nodes_wyRenderTexture_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyRenderTexture_make01);
   tolua_function(tolua_S,"delete",tolua_nodes_wyRenderTexture_delete00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyRenderTexture_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyRenderTexture_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyRenderTexture_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyRenderTexture_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyRenderTexture_setColor01);
   tolua_function(tolua_S,"beginRender",tolua_nodes_wyRenderTexture_beginRender00);
   tolua_function(tolua_S,"endRender",tolua_nodes_wyRenderTexture_endRender00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyRibbon","wyRibbon","wyNode",tolua_collect_wyRibbon);
  #else
  tolua_cclass(tolua_S,"wyRibbon","wyRibbon","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyRibbon");
   tolua_function(tolua_S,"delete",tolua_nodes_wyRibbon_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyRibbon_setContentSize00);
   tolua_function(tolua_S,"forceFirstPoint",tolua_nodes_wyRibbon_forceFirstPoint00);
   tolua_function(tolua_S,"update",tolua_nodes_wyRibbon_update00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wyRibbon_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wyRibbon_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyScene","wyScene","wyNode",tolua_collect_wyScene);
  #else
  tolua_cclass(tolua_S,"wyScene","wyScene","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyScene");
   tolua_function(tolua_S,"make",tolua_nodes_wyScene_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyScene_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyScene_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyScene_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyScene_delete00);
   tolua_function(tolua_S,"keyDown",tolua_nodes_wyScene_keyDown00);
   tolua_function(tolua_S,"keyUp",tolua_nodes_wyScene_keyUp00);
   tolua_function(tolua_S,"isTransition",tolua_nodes_wyScene_isTransition00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"wyTimerEquals",tolua_nodes_wyTimerEquals00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyScheduler","wyScheduler","wyObject",tolua_collect_wyScheduler);
  #else
  tolua_cclass(tolua_S,"wyScheduler","wyScheduler","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyScheduler");
   tolua_function(tolua_S,"getInstance",tolua_nodes_wyScheduler_getInstance00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyScheduler_delete00);
   tolua_function(tolua_S,"scheduleLocked",tolua_nodes_wyScheduler_scheduleLocked00);
   tolua_function(tolua_S,"unscheduleLocked",tolua_nodes_wyScheduler_unscheduleLocked00);
   tolua_function(tolua_S,"setTimeScale",tolua_nodes_wyScheduler_setTimeScale00);
   tolua_function(tolua_S,"getTimeScale",tolua_nodes_wyScheduler_getTimeScale00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTimer","wyTimer","wyObject",tolua_collect_wyTimer);
  #else
  tolua_cclass(tolua_S,"wyTimer","wyTimer","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTimer");
   tolua_function(tolua_S,"make",tolua_nodes_wyTimer_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyTimer_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wyTimer_make02);
   tolua_function(tolua_S,"new",tolua_nodes_wyTimer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTimer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTimer_new00_local);
   tolua_function(tolua_S,"new",tolua_nodes_wyTimer_new01);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTimer_new01_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTimer_new01_local);
   tolua_function(tolua_S,"new",tolua_nodes_wyTimer_new02);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTimer_new02_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTimer_new02_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyTimer_delete00);
   tolua_function(tolua_S,"setInterval",tolua_nodes_wyTimer_setInterval00);
   tolua_function(tolua_S,"getInterval",tolua_nodes_wyTimer_getInterval00);
   tolua_function(tolua_S,"setFrame",tolua_nodes_wyTimer_setFrame00);
   tolua_function(tolua_S,"getFrame",tolua_nodes_wyTimer_getFrame00);
   tolua_function(tolua_S,"fire",tolua_nodes_wyTimer_fire00);
   tolua_function(tolua_S,"setOneShot",tolua_nodes_wyTimer_setOneShot00);
   tolua_function(tolua_S,"isOneShot",tolua_nodes_wyTimer_isOneShot00);
   tolua_function(tolua_S,"setMaxInvocation",tolua_nodes_wyTimer_setMaxInvocation00);
   tolua_function(tolua_S,"getMaxInvocation",tolua_nodes_wyTimer_getMaxInvocation00);
   tolua_function(tolua_S,"getCurrentInvocationCount",tolua_nodes_wyTimer_getCurrentInvocationCount00);
   tolua_function(tolua_S,"getElapsed",tolua_nodes_wyTimer_getElapsed00);
   tolua_function(tolua_S,"getTargetSelector",tolua_nodes_wyTimer_getTargetSelector00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wySprite","wySprite","wyTextureNode",tolua_collect_wySprite);
  #else
  tolua_cclass(tolua_S,"wySprite","wySprite","wyTextureNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wySprite");
   tolua_function(tolua_S,"make",tolua_nodes_wySprite_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wySprite_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wySprite_make02);
   tolua_function(tolua_S,"new",tolua_nodes_wySprite_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySprite_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySprite_new00_local);
   tolua_function(tolua_S,"new",tolua_nodes_wySprite_new01);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySprite_new01_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySprite_new01_local);
   tolua_function(tolua_S,"new",tolua_nodes_wySprite_new02);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySprite_new02_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySprite_new02_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wySprite_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wySpriteEx","wySpriteEx","wyTextureNode",tolua_collect_wySpriteEx);
  #else
  tolua_cclass(tolua_S,"wySpriteEx","wySpriteEx","wyTextureNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wySpriteEx");
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteEx_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteEx_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteEx_make02);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteEx_make03);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteEx_make04);
   tolua_function(tolua_S,"new",tolua_nodes_wySpriteEx_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpriteEx_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpriteEx_new00_local);
   tolua_function(tolua_S,"new",tolua_nodes_wySpriteEx_new01);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpriteEx_new01_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpriteEx_new01_local);
   tolua_function(tolua_S,"new",tolua_nodes_wySpriteEx_new02);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpriteEx_new02_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpriteEx_new02_local);
   tolua_function(tolua_S,"new",tolua_nodes_wySpriteEx_new03);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpriteEx_new03_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpriteEx_new03_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wySpriteEx_delete00);
   tolua_function(tolua_S,"addChild",tolua_nodes_wySpriteEx_addChild00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wySpriteEx_setAlpha00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wySpriteEx_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wySpriteEx_setColor01);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wySpriteEx_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wySpriteEx_setTexture00);
   tolua_function(tolua_S,"setFlipX",tolua_nodes_wySpriteEx_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_nodes_wySpriteEx_setFlipY00);
   tolua_function(tolua_S,"setTextureRect",tolua_nodes_wySpriteEx_setTextureRect00);
   tolua_function(tolua_S,"setAtlasIndex",tolua_nodes_wySpriteEx_setAtlasIndex00);
   tolua_function(tolua_S,"getAtlasIndex",tolua_nodes_wySpriteEx_getAtlasIndex00);
   tolua_function(tolua_S,"setBatchNode",tolua_nodes_wySpriteEx_setBatchNode00);
   tolua_function(tolua_S,"useBatchNode",tolua_nodes_wySpriteEx_useBatchNode00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyMWSprite","wyMWSprite","",NULL);
  tolua_beginmodule(tolua_S,"wyMWSprite");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wySpriteBatchNode","wySpriteBatchNode","wyNode",tolua_collect_wySpriteBatchNode);
  #else
  tolua_cclass(tolua_S,"wySpriteBatchNode","wySpriteBatchNode","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wySpriteBatchNode");
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteBatchNode_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wySpriteBatchNode_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpriteBatchNode_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpriteBatchNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wySpriteBatchNode_delete00);
   tolua_function(tolua_S,"setMarker",tolua_nodes_wySpriteBatchNode_setMarker00);
   tolua_function(tolua_S,"getMarker",tolua_nodes_wySpriteBatchNode_getMarker00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wySpriteFrame","wySpriteFrame","wyFrame",tolua_collect_wySpriteFrame);
  #else
  tolua_cclass(tolua_S,"wySpriteFrame","wySpriteFrame","wyFrame",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wySpriteFrame");
   tolua_function(tolua_S,"delete",tolua_nodes_wySpriteFrame_delete00);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteFrame_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteFrame_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteFrame_make02);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteFrame_make03);
   tolua_function(tolua_S,"make",tolua_nodes_wySpriteFrame_make04);
   tolua_function(tolua_S,"getRect",tolua_nodes_wySpriteFrame_getRect00);
   tolua_function(tolua_S,"setRect",tolua_nodes_wySpriteFrame_setRect00);
   tolua_function(tolua_S,"getSourceColorRect",tolua_nodes_wySpriteFrame_getSourceColorRect00);
   tolua_function(tolua_S,"setSourceColorRect",tolua_nodes_wySpriteFrame_setSourceColorRect00);
   tolua_function(tolua_S,"getOffset",tolua_nodes_wySpriteFrame_getOffset00);
   tolua_function(tolua_S,"setOffset",tolua_nodes_wySpriteFrame_setOffset00);
   tolua_function(tolua_S,"getOriginalSize",tolua_nodes_wySpriteFrame_getOriginalSize00);
   tolua_function(tolua_S,"setOriginalSize",tolua_nodes_wySpriteFrame_setOriginalSize00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wySpriteFrame_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wySpriteFrame_setTexture00);
   tolua_function(tolua_S,"setRotated",tolua_nodes_wySpriteFrame_setRotated00);
   tolua_function(tolua_S,"isRotated",tolua_nodes_wySpriteFrame_isRotated00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTextureNode","wyTextureNode","wyNode",tolua_collect_wyTextureNode);
  #else
  tolua_cclass(tolua_S,"wyTextureNode","wyTextureNode","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTextureNode");
   tolua_function(tolua_S,"make",tolua_nodes_wyTextureNode_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyTextureNode_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTextureNode_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTextureNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyTextureNode_delete00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyTextureNode_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyTextureNode_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyTextureNode_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyTextureNode_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyTextureNode_setColor01);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyTextureNode_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyTextureNode_setTexture00);
   tolua_function(tolua_S,"setTextureRect",tolua_nodes_wyTextureNode_setTextureRect00);
   tolua_function(tolua_S,"getTextureRect",tolua_nodes_wyTextureNode_getTextureRect00);
   tolua_function(tolua_S,"addAnimation",tolua_nodes_wyTextureNode_addAnimation00);
   tolua_function(tolua_S,"getAnimationById",tolua_nodes_wyTextureNode_getAnimationById00);
   tolua_function(tolua_S,"getDisplayFrame",tolua_nodes_wyTextureNode_getDisplayFrame00);
   tolua_function(tolua_S,"isFrameDisplayed",tolua_nodes_wyTextureNode_isFrameDisplayed00);
   tolua_function(tolua_S,"setDisplayFrame",tolua_nodes_wyTextureNode_setDisplayFrame00);
   tolua_function(tolua_S,"setDisplayFrameById",tolua_nodes_wyTextureNode_setDisplayFrameById00);
   tolua_function(tolua_S,"setFlipX",tolua_nodes_wyTextureNode_setFlipX00);
   tolua_function(tolua_S,"isFlipX",tolua_nodes_wyTextureNode_isFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_nodes_wyTextureNode_setFlipY00);
   tolua_function(tolua_S,"isFlipY",tolua_nodes_wyTextureNode_isFlipY00);
   tolua_function(tolua_S,"setRotatedZwoptex",tolua_nodes_wyTextureNode_setRotatedZwoptex00);
   tolua_function(tolua_S,"isRotatedZwoptex",tolua_nodes_wyTextureNode_isRotatedZwoptex00);
   tolua_function(tolua_S,"setAutoFit",tolua_nodes_wyTextureNode_setAutoFit00);
   tolua_function(tolua_S,"isAutoFit",tolua_nodes_wyTextureNode_isAutoFit00);
   tolua_function(tolua_S,"makeFrame",tolua_nodes_wyTextureNode_makeFrame00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTGATileMapAtlas","wyTGATileMapAtlas","wyTileMapAtlas",tolua_collect_wyTGATileMapAtlas);
  #else
  tolua_cclass(tolua_S,"wyTGATileMapAtlas","wyTGATileMapAtlas","wyTileMapAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTGATileMapAtlas");
   tolua_function(tolua_S,"make",tolua_nodes_wyTGATileMapAtlas_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyTGATileMapAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTGATileMapAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTGATileMapAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyTGATileMapAtlas_delete00);
   tolua_function(tolua_S,"hasTileAt",tolua_nodes_wyTGATileMapAtlas_hasTileAt00);
   tolua_function(tolua_S,"getHorizontalTileCount",tolua_nodes_wyTGATileMapAtlas_getHorizontalTileCount00);
   tolua_function(tolua_S,"getVerticalTileCount",tolua_nodes_wyTGATileMapAtlas_getVerticalTileCount00);
   tolua_function(tolua_S,"tileValueAt",tolua_nodes_wyTGATileMapAtlas_tileValueAt00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTiledSprite","wyTiledSprite","wyNode",tolua_collect_wyTiledSprite);
  #else
  tolua_cclass(tolua_S,"wyTiledSprite","wyTiledSprite","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTiledSprite");
   tolua_function(tolua_S,"make",tolua_nodes_wyTiledSprite_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyTiledSprite_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyTiledSprite_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyTiledSprite_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyTiledSprite_delete00);
   tolua_function(tolua_S,"isTileVertical",tolua_nodes_wyTiledSprite_isTileVertical00);
   tolua_function(tolua_S,"isTileHorizontal",tolua_nodes_wyTiledSprite_isTileHorizontal00);
   tolua_function(tolua_S,"setTileDirection",tolua_nodes_wyTiledSprite_setTileDirection00);
   tolua_function(tolua_S,"setTextureRect",tolua_nodes_wyTiledSprite_setTextureRect00);
   tolua_function(tolua_S,"getTextureRect",tolua_nodes_wyTiledSprite_getTextureRect00);
   tolua_function(tolua_S,"setOffsetX",tolua_nodes_wyTiledSprite_setOffsetX00);
   tolua_function(tolua_S,"setOffsetY",tolua_nodes_wyTiledSprite_setOffsetY00);
   tolua_function(tolua_S,"offsetBy",tolua_nodes_wyTiledSprite_offsetBy00);
   tolua_function(tolua_S,"isFlinging",tolua_nodes_wyTiledSprite_isFlinging00);
   tolua_function(tolua_S,"setMaxOffsetX",tolua_nodes_wyTiledSprite_setMaxOffsetX00);
   tolua_function(tolua_S,"getMaxOffsetX",tolua_nodes_wyTiledSprite_getMaxOffsetX00);
   tolua_function(tolua_S,"setMinOffsetX",tolua_nodes_wyTiledSprite_setMinOffsetX00);
   tolua_function(tolua_S,"getMinOffsetX",tolua_nodes_wyTiledSprite_getMinOffsetX00);
   tolua_function(tolua_S,"setMaxOffsetY",tolua_nodes_wyTiledSprite_setMaxOffsetY00);
   tolua_function(tolua_S,"getMaxOffsetY",tolua_nodes_wyTiledSprite_getMaxOffsetY00);
   tolua_function(tolua_S,"setMinOffsetY",tolua_nodes_wyTiledSprite_setMinOffsetY00);
   tolua_function(tolua_S,"getMinOffsetY",tolua_nodes_wyTiledSprite_getMinOffsetY00);
   tolua_function(tolua_S,"stopFling",tolua_nodes_wyTiledSprite_stopFling00);
   tolua_function(tolua_S,"fling",tolua_nodes_wyTiledSprite_fling00);
   tolua_function(tolua_S,"setStretch",tolua_nodes_wyTiledSprite_setStretch00);
   tolua_function(tolua_S,"isStretch",tolua_nodes_wyTiledSprite_isStretch00);
   tolua_function(tolua_S,"setSpacing",tolua_nodes_wyTiledSprite_setSpacing00);
   tolua_function(tolua_S,"getSpacingX",tolua_nodes_wyTiledSprite_getSpacingX00);
   tolua_function(tolua_S,"getSpacingY",tolua_nodes_wyTiledSprite_getSpacingY00);
   tolua_function(tolua_S,"isDither",tolua_nodes_wyTiledSprite_isDither00);
   tolua_function(tolua_S,"setDither",tolua_nodes_wyTiledSprite_setDither00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTileMapAtlas","wyTileMapAtlas","wyAtlasNode",tolua_collect_wyTileMapAtlas);
  #else
  tolua_cclass(tolua_S,"wyTileMapAtlas","wyTileMapAtlas","wyAtlasNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTileMapAtlas");
   tolua_function(tolua_S,"delete",tolua_nodes_wyTileMapAtlas_delete00);
   tolua_function(tolua_S,"hasTileAt",tolua_nodes_wyTileMapAtlas_hasTileAt00);
   tolua_function(tolua_S,"getHorizontalTileCount",tolua_nodes_wyTileMapAtlas_getHorizontalTileCount00);
   tolua_function(tolua_S,"getVerticalTileCount",tolua_nodes_wyTileMapAtlas_getVerticalTileCount00);
   tolua_function(tolua_S,"tileValueAt",tolua_nodes_wyTileMapAtlas_tileValueAt00);
   tolua_function(tolua_S,"getTile",tolua_nodes_wyTileMapAtlas_getTile00);
   tolua_function(tolua_S,"setTile",tolua_nodes_wyTileMapAtlas_setTile00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyStripRibbon","wyStripRibbon","wyRibbon",tolua_collect_wyStripRibbon);
  #else
  tolua_cclass(tolua_S,"wyStripRibbon","wyStripRibbon","wyRibbon",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyStripRibbon");
   tolua_function(tolua_S,"make",tolua_nodes_wyStripRibbon_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyStripRibbon_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyStripRibbon_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyStripRibbon_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyStripRibbon_delete00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyStripRibbon_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyStripRibbon_setTexture00);
   tolua_function(tolua_S,"update",tolua_nodes_wyStripRibbon_update00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wyStripRibbon_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wyStripRibbon_reset00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wySpotRibbon","wySpotRibbon","wyRibbon",tolua_collect_wySpotRibbon);
  #else
  tolua_cclass(tolua_S,"wySpotRibbon","wySpotRibbon","wyRibbon",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wySpotRibbon");
   tolua_function(tolua_S,"make",tolua_nodes_wySpotRibbon_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wySpotRibbon_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wySpotRibbon_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wySpotRibbon_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wySpotRibbon_delete00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wySpotRibbon_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wySpotRibbon_setTexture00);
   tolua_function(tolua_S,"update",tolua_nodes_wySpotRibbon_update00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wySpotRibbon_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wySpotRibbon_reset00);
   tolua_function(tolua_S,"setDistance",tolua_nodes_wySpotRibbon_setDistance00);
   tolua_function(tolua_S,"getDistance",tolua_nodes_wySpotRibbon_getDistance00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyBladeRibbon","wyBladeRibbon","wyRibbon",tolua_collect_wyBladeRibbon);
  #else
  tolua_cclass(tolua_S,"wyBladeRibbon","wyBladeRibbon","wyRibbon",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyBladeRibbon");
   tolua_function(tolua_S,"make",tolua_nodes_wyBladeRibbon_make00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyBladeRibbon_delete00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyBladeRibbon_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyBladeRibbon_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyBladeRibbon_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyBladeRibbon_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyBladeRibbon_setColor01);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyBladeRibbon_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyBladeRibbon_setTexture00);
   tolua_function(tolua_S,"update",tolua_nodes_wyBladeRibbon_update00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wyBladeRibbon_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wyBladeRibbon_reset00);
   tolua_function(tolua_S,"setMaxPointCount",tolua_nodes_wyBladeRibbon_setMaxPointCount00);
   tolua_function(tolua_S,"getMaxPointCount",tolua_nodes_wyBladeRibbon_getMaxPointCount00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyLineRibbon","wyLineRibbon","wyRibbon",tolua_collect_wyLineRibbon);
  #else
  tolua_cclass(tolua_S,"wyLineRibbon","wyLineRibbon","wyRibbon",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyLineRibbon");
   tolua_function(tolua_S,"make",tolua_nodes_wyLineRibbon_make00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyLineRibbon_delete00);
   tolua_function(tolua_S,"getTexture",tolua_nodes_wyLineRibbon_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_nodes_wyLineRibbon_setTexture00);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyLineRibbon_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyLineRibbon_setAlpha00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyLineRibbon_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyLineRibbon_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyLineRibbon_setColor01);
   tolua_function(tolua_S,"update",tolua_nodes_wyLineRibbon_update00);
   tolua_function(tolua_S,"addPoint",tolua_nodes_wyLineRibbon_addPoint00);
   tolua_function(tolua_S,"reset",tolua_nodes_wyLineRibbon_reset00);
   tolua_function(tolua_S,"setLineWidth",tolua_nodes_wyLineRibbon_setLineWidth00);
   tolua_function(tolua_S,"getLineWidth",tolua_nodes_wyLineRibbon_getLineWidth00);
   tolua_function(tolua_S,"getLineColor",tolua_nodes_wyLineRibbon_getLineColor00);
   tolua_function(tolua_S,"getLineCount",tolua_nodes_wyLineRibbon_getLineCount00);
   tolua_function(tolua_S,"getLinePointCount",tolua_nodes_wyLineRibbon_getLinePointCount00);
   tolua_function(tolua_S,"getLinePointList",tolua_nodes_wyLineRibbon_getLinePointList00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyPageIndicator","wyPageIndicator","wyNode",NULL);
  tolua_beginmodule(tolua_S,"wyPageIndicator");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyDotPageIndicator","wyDotPageIndicator","wyPageIndicator",tolua_collect_wyDotPageIndicator);
  #else
  tolua_cclass(tolua_S,"wyDotPageIndicator","wyDotPageIndicator","wyPageIndicator",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyDotPageIndicator");
   tolua_function(tolua_S,"make",tolua_nodes_wyDotPageIndicator_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyDotPageIndicator_make01);
   tolua_function(tolua_S,"delete",tolua_nodes_wyDotPageIndicator_delete00);
   tolua_function(tolua_S,"setDotSpacing",tolua_nodes_wyDotPageIndicator_setDotSpacing00);
   tolua_function(tolua_S,"getDotSpacing",tolua_nodes_wyDotPageIndicator_getDotSpacing00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyAnimate","wyAnimate","",NULL);
  tolua_beginmodule(tolua_S,"wyAnimate");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyAnimation","wyAnimation","wyObject",tolua_collect_wyAnimation);
  #else
  tolua_cclass(tolua_S,"wyAnimation","wyAnimation","wyObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyAnimation");
   tolua_function(tolua_S,"make",tolua_nodes_wyAnimation_make00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyAnimation_delete00);
   tolua_function(tolua_S,"getDuration",tolua_nodes_wyAnimation_getDuration00);
   tolua_function(tolua_S,"getFrames",tolua_nodes_wyAnimation_getFrames00);
   tolua_function(tolua_S,"getId",tolua_nodes_wyAnimation_getId00);
   tolua_function(tolua_S,"addFrame",tolua_nodes_wyAnimation_addFrame00);
   tolua_function(tolua_S,"addFrame",tolua_nodes_wyAnimation_addFrame01);
   tolua_function(tolua_S,"addFrame",tolua_nodes_wyAnimation_addFrame02);
   tolua_function(tolua_S,"setCallback",tolua_nodes_wyAnimation_setCallback00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyAnimationCallback","wyAnimationCallback","",NULL);
  tolua_beginmodule(tolua_S,"wyAnimationCallback");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyPageControl","wyPageControl","wyNode",tolua_collect_wyPageControl);
  #else
  tolua_cclass(tolua_S,"wyPageControl","wyPageControl","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyPageControl");
   tolua_function(tolua_S,"make",tolua_nodes_wyPageControl_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyPageControl_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyPageControl_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyPageControl_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyPageControl_delete00);
   tolua_function(tolua_S,"touchesBegan",tolua_nodes_wyPageControl_touchesBegan00);
   tolua_function(tolua_S,"touchesMoved",tolua_nodes_wyPageControl_touchesMoved00);
   tolua_function(tolua_S,"touchesEnded",tolua_nodes_wyPageControl_touchesEnded00);
   tolua_function(tolua_S,"touchesCancelled",tolua_nodes_wyPageControl_touchesCancelled00);
   tolua_function(tolua_S,"onFling",tolua_nodes_wyPageControl_onFling00);
   tolua_function(tolua_S,"addPage",tolua_nodes_wyPageControl_addPage00);
   tolua_function(tolua_S,"addPageAt",tolua_nodes_wyPageControl_addPageAt00);
   tolua_function(tolua_S,"removePage",tolua_nodes_wyPageControl_removePage00);
   tolua_function(tolua_S,"removePageAt",tolua_nodes_wyPageControl_removePageAt00);
   tolua_function(tolua_S,"removeAllPages",tolua_nodes_wyPageControl_removeAllPages00);
   tolua_function(tolua_S,"setInitialPage",tolua_nodes_wyPageControl_setInitialPage00);
   tolua_function(tolua_S,"gotoPage",tolua_nodes_wyPageControl_gotoPage00);
   tolua_function(tolua_S,"setPageSpacing",tolua_nodes_wyPageControl_setPageSpacing00);
   tolua_function(tolua_S,"getPageSpacing",tolua_nodes_wyPageControl_getPageSpacing00);
   tolua_function(tolua_S,"getCenterY",tolua_nodes_wyPageControl_getCenterY00);
   tolua_function(tolua_S,"setCenterY",tolua_nodes_wyPageControl_setCenterY00);
   tolua_function(tolua_S,"getCenterX",tolua_nodes_wyPageControl_getCenterX00);
   tolua_function(tolua_S,"setCenterX",tolua_nodes_wyPageControl_setCenterX00);
   tolua_function(tolua_S,"getPageCount",tolua_nodes_wyPageControl_getPageCount00);
   tolua_function(tolua_S,"setCallback",tolua_nodes_wyPageControl_setCallback00);
   tolua_function(tolua_S,"isVertical",tolua_nodes_wyPageControl_isVertical00);
   tolua_function(tolua_S,"setVertical",tolua_nodes_wyPageControl_setVertical00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyPageControlCallback","wyPageControlCallback","",NULL);
  tolua_beginmodule(tolua_S,"wyPageControlCallback");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyTextBoxCallback","wyTextBoxCallback","",NULL);
  tolua_beginmodule(tolua_S,"wyTextBoxCallback");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyTextBox","wyTextBox","wyNode",tolua_collect_wyTextBox);
  #else
  tolua_cclass(tolua_S,"wyTextBox","wyTextBox","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyTextBox");
   tolua_function(tolua_S,"make",tolua_nodes_wyTextBox_make00);
   tolua_function(tolua_S,"delete",tolua_nodes_wyTextBox_delete00);
   tolua_function(tolua_S,"onEnter",tolua_nodes_wyTextBox_onEnter00);
   tolua_function(tolua_S,"onExit",tolua_nodes_wyTextBox_onExit00);
   tolua_function(tolua_S,"getText",tolua_nodes_wyTextBox_getText00);
   tolua_function(tolua_S,"setText",tolua_nodes_wyTextBox_setText00);
   tolua_function(tolua_S,"getColor",tolua_nodes_wyTextBox_getColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyTextBox_setColor00);
   tolua_function(tolua_S,"setColor",tolua_nodes_wyTextBox_setColor01);
   tolua_function(tolua_S,"getAlpha",tolua_nodes_wyTextBox_getAlpha00);
   tolua_function(tolua_S,"setAlpha",tolua_nodes_wyTextBox_setAlpha00);
   tolua_function(tolua_S,"setCallback",tolua_nodes_wyTextBox_setCallback00);
   tolua_function(tolua_S,"setTitle",tolua_nodes_wyTextBox_setTitle00);
   tolua_function(tolua_S,"getTitle",tolua_nodes_wyTextBox_getTitle00);
   tolua_function(tolua_S,"setMessage",tolua_nodes_wyTextBox_setMessage00);
   tolua_function(tolua_S,"getMessage",tolua_nodes_wyTextBox_getMessage00);
   tolua_function(tolua_S,"setPositiveButton",tolua_nodes_wyTextBox_setPositiveButton00);
   tolua_function(tolua_S,"getPositiveButton",tolua_nodes_wyTextBox_getPositiveButton00);
   tolua_function(tolua_S,"setNegativeButton",tolua_nodes_wyTextBox_setNegativeButton00);
   tolua_function(tolua_S,"getNegativeButton",tolua_nodes_wyTextBox_getNegativeButton00);
   tolua_function(tolua_S,"onPositiveButtonClicked",tolua_nodes_wyTextBox_onPositiveButtonClicked00);
   tolua_function(tolua_S,"onNegativeButtonClicked",tolua_nodes_wyTextBox_onNegativeButtonClicked00);
   tolua_function(tolua_S,"onTextChanged",tolua_nodes_wyTextBox_onTextChanged00);
   tolua_function(tolua_S,"setPadding",tolua_nodes_wyTextBox_setPadding00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"wyScrollableLayerListener","wyScrollableLayerListener","",NULL);
  tolua_beginmodule(tolua_S,"wyScrollableLayerListener");
   tolua_function(tolua_S,"onScrollOffsetChanged",tolua_nodes_wyScrollableLayerListener_onScrollOffsetChanged00);
   tolua_function(tolua_S,"onStartFling",tolua_nodes_wyScrollableLayerListener_onStartFling00);
   tolua_function(tolua_S,"onEndFling",tolua_nodes_wyScrollableLayerListener_onEndFling00);
   tolua_function(tolua_S,"onScrollableChildNotVisible",tolua_nodes_wyScrollableLayerListener_onScrollableChildNotVisible00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyScrollableLayer","wyScrollableLayer","wyColorLayer",tolua_collect_wyScrollableLayer);
  #else
  tolua_cclass(tolua_S,"wyScrollableLayer","wyScrollableLayer","wyColorLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyScrollableLayer");
   tolua_function(tolua_S,"make",tolua_nodes_wyScrollableLayer_make00);
   tolua_function(tolua_S,"new",tolua_nodes_wyScrollableLayer_new00);
   tolua_function(tolua_S,"new_local",tolua_nodes_wyScrollableLayer_new00_local);
   tolua_function(tolua_S,".call",tolua_nodes_wyScrollableLayer_new00_local);
   tolua_function(tolua_S,"delete",tolua_nodes_wyScrollableLayer_delete00);
   tolua_function(tolua_S,"setContentSize",tolua_nodes_wyScrollableLayer_setContentSize00);
   tolua_function(tolua_S,"touchesBegan",tolua_nodes_wyScrollableLayer_touchesBegan00);
   tolua_function(tolua_S,"touchesMoved",tolua_nodes_wyScrollableLayer_touchesMoved00);
   tolua_function(tolua_S,"touchesEnded",tolua_nodes_wyScrollableLayer_touchesEnded00);
   tolua_function(tolua_S,"touchesCancelled",tolua_nodes_wyScrollableLayer_touchesCancelled00);
   tolua_function(tolua_S,"onFling",tolua_nodes_wyScrollableLayer_onFling00);
   tolua_function(tolua_S,"setVertical",tolua_nodes_wyScrollableLayer_setVertical00);
   tolua_function(tolua_S,"isVertical",tolua_nodes_wyScrollableLayer_isVertical00);
   tolua_function(tolua_S,"setHorizontal",tolua_nodes_wyScrollableLayer_setHorizontal00);
   tolua_function(tolua_S,"isHorizontal",tolua_nodes_wyScrollableLayer_isHorizontal00);
   tolua_function(tolua_S,"addScrollableChildLocked",tolua_nodes_wyScrollableLayer_addScrollableChildLocked00);
   tolua_function(tolua_S,"removeScrollableChildLocked",tolua_nodes_wyScrollableLayer_removeScrollableChildLocked00);
   tolua_function(tolua_S,"removeScrollableChildByTagLocked",tolua_nodes_wyScrollableLayer_removeScrollableChildByTagLocked00);
   tolua_function(tolua_S,"getScrollableChildByTag",tolua_nodes_wyScrollableLayer_getScrollableChildByTag00);
   tolua_function(tolua_S,"getScrollExtent",tolua_nodes_wyScrollableLayer_getScrollExtent00);
   tolua_function(tolua_S,"setHorizontalThumb",tolua_nodes_wyScrollableLayer_setHorizontalThumb00);
   tolua_function(tolua_S,"setVerticalThumb",tolua_nodes_wyScrollableLayer_setVerticalThumb00);
   tolua_function(tolua_S,"setThumbFadeOutTime",tolua_nodes_wyScrollableLayer_setThumbFadeOutTime00);
   tolua_function(tolua_S,"getThumbFadeOutTime",tolua_nodes_wyScrollableLayer_getThumbFadeOutTime00);
   tolua_function(tolua_S,"setLeftMargin",tolua_nodes_wyScrollableLayer_setLeftMargin00);
   tolua_function(tolua_S,"getLeftMargin",tolua_nodes_wyScrollableLayer_getLeftMargin00);
   tolua_function(tolua_S,"setRightMargin",tolua_nodes_wyScrollableLayer_setRightMargin00);
   tolua_function(tolua_S,"getRightMargin",tolua_nodes_wyScrollableLayer_getRightMargin00);
   tolua_function(tolua_S,"setTopMargin",tolua_nodes_wyScrollableLayer_setTopMargin00);
   tolua_function(tolua_S,"getTopMargin",tolua_nodes_wyScrollableLayer_getTopMargin00);
   tolua_function(tolua_S,"setBottomMargin",tolua_nodes_wyScrollableLayer_setBottomMargin00);
   tolua_function(tolua_S,"getBottomMargin",tolua_nodes_wyScrollableLayer_getBottomMargin00);
   tolua_function(tolua_S,"getOffsetX",tolua_nodes_wyScrollableLayer_getOffsetX00);
   tolua_function(tolua_S,"getOffsetY",tolua_nodes_wyScrollableLayer_getOffsetY00);
   tolua_function(tolua_S,"setOffsetX",tolua_nodes_wyScrollableLayer_setOffsetX00);
   tolua_function(tolua_S,"setOffsetY",tolua_nodes_wyScrollableLayer_setOffsetY00);
   tolua_function(tolua_S,"isAtXEnd",tolua_nodes_wyScrollableLayer_isAtXEnd00);
   tolua_function(tolua_S,"isAtYEnd",tolua_nodes_wyScrollableLayer_isAtYEnd00);
   tolua_function(tolua_S,"setCallback",tolua_nodes_wyScrollableLayer_setCallback00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"wyToast","wyToast","wyNode",tolua_collect_wyToast);
  #else
  tolua_cclass(tolua_S,"wyToast","wyToast","wyNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"wyToast");
   tolua_function(tolua_S,"delete",tolua_nodes_wyToast_delete00);
   tolua_function(tolua_S,"make",tolua_nodes_wyToast_make00);
   tolua_function(tolua_S,"make",tolua_nodes_wyToast_make01);
   tolua_function(tolua_S,"make",tolua_nodes_wyToast_make02);
   tolua_function(tolua_S,"show",tolua_nodes_wyToast_show00);
   tolua_function(tolua_S,"getBackground",tolua_nodes_wyToast_getBackground00);
   tolua_function(tolua_S,"getContent",tolua_nodes_wyToast_getContent00);
   tolua_function(tolua_S,"setMargin",tolua_nodes_wyToast_setMargin00);
   tolua_function(tolua_S,"getLeftMargin",tolua_nodes_wyToast_getLeftMargin00);
   tolua_function(tolua_S,"getRightMargin",tolua_nodes_wyToast_getRightMargin00);
   tolua_function(tolua_S,"getTopMargin",tolua_nodes_wyToast_getTopMargin00);
   tolua_function(tolua_S,"getBottomMargin",tolua_nodes_wyToast_getBottomMargin00);
   tolua_function(tolua_S,"setToastPosition",tolua_nodes_wyToast_setToastPosition00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_nodes (lua_State* tolua_S) {
 return tolua_nodes_open(tolua_S);
};
#endif


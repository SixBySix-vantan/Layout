//
//  UILayerConstants.hpp
//  6x6
//
//  Created by 辰巳優太 on 2016/06/05.
//
//

#ifndef UILayerConstants_hpp
#define UILayerConstants_hpp

#define SAFE_DELETE(p_) if(p_){delete p_;p_ = NULL;}

// =============================================================================================
// 画面サイズ( 19 : 6 )
#define WINDOW_TOP          720.f
#define WINDOW_BOTTOM       0.f
#define WINDOW_LEFT         0.f
#define WINDOW_RIGHT        1280.f

// 画面中央
#define WINDOW_CENTER       (Vec2( WINDOW_RIGHT * 0.5f, WINDOW_TOP * 0.5f ))


// ===================================================================================================================
// UIレイヤーで使用するファイルのインクルード
#include "UILayerConstants.hpp"
#include "UILayer.hpp"
#include "CardsArea.hpp"
#include "CardUI.hpp"
#include "DetailsArea.hpp"
#include "StatusesArea.hpp"


// =============================================================================================
// 画像
#define IMAGE_Field             "field.png"
#define IMAGE_Field600          "field600x600.png"
#define IMAGE_UI_CardsArea      "cardsArea.png"
#define IMAGE_UI_Deck           "deck.png"
#define IMAGE_UI_Hand           "hand.png"
#define IMAGE_UI_Cemetery       "cemetery.png"

#define IMAGE_UI_StatusesArea   "statusesArea.png"

#define IMAGE_UI_DetailsArea    "details.png"

// =============================================================================================
// 位置
#define Position_Field              (Vec2( WINDOW_RIGHT - 440, WINDOW_TOP - 300 ) )
#define Position_CardsArea          (Vec2( WINDOW_RIGHT * 0.5f, 60.f ) )

#define Position_DetailsArea        (Vec2( WINDOW_RIGHT * 0.5f - 310.f, WINDOW_TOP - 300.f ) )

#define Position_P1_StatusesArea    (Vec2( 60.f, WINDOW_TOP - 300.f ) )
#define Position_P2_StatusesArea    (Vec2( WINDOW_RIGHT - 60.f, WINDOW_TOP - 300.f ) )


#endif /* UILayerConstants_hpp */

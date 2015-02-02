/*******************************************************************//*
 * Render component for EnemyProjectile.
 *
 * @author      Brandon To
 * @version     1.0
 * @since       2014-09-17
 * @modified    2014-09-19
 *********************************************************************/
#ifndef SPACESHOOTER_ENEMYPROJECTILERENDERCOMPONENT_
    #define SPACESHOOTER_ENEMYPROJECTILERENDERCOMPONENT_

#include "RenderComponent.h"
#include <SDL2/SDL.h>

class GameEntity;

struct WindowElements;

class EnemyProjectileRenderComponent : public RenderComponent
{
    public:
        //Constructor
        EnemyProjectileRenderComponent(GameEntity* gameEntity,
                                        WindowElements* windowElements,
                                        GameEntity* enemyEntity);

        //Destructor
        ~EnemyProjectileRenderComponent();

        //Methods
        void update();
};

#endif
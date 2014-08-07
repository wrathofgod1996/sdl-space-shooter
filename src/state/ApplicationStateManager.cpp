#include <SDL2/SDL.h>
#include "ApplicationStateManager.h"

/*******************************************************************//*
 * Implementation of the ApplicationStateManager class.
 *
 * @author      Brandon To
 * @version     1.0
 * @since       2014-08-05
 * @modified    2014-08-07
 *********************************************************************/

//Constructors
ApplicationStateManager::ApplicationStateManager(windowElements* windowElements)
{
    //currentState = new IntroState();
    //currentState = new PreMenuTransitionState();
    currentState = new MenuState(this, windowElements);
    nextStateEnum = STATE_NULL;
    this.windowElements = windowElements;
}

//Destructors
ApplicationStateManager::~ApplicationStateManager()
{
    if (currentState != NULL)
    {
        delete currentState;
        currentState = NULL;
    }
}

//Methods
void ApplicationStateManager::onEvent()
{
    currentState->onEvent();
}

void ApplicationStateManager::onUpdate()
{
    currentState->onUpdate();
}

void ApplicationStateManager::onRender()
{
    currentState->onRender();
}

ApplicationState* ApplicationStateManager::getCurrentState()
{
    return currentState;
}

bool ApplicationStateManager::isExit()
{
    return nextStateEnum == STATE_EXIT;
}

void ApplicationStateManager::setNextState(int nextState)
{
    nextStateEnum = nextState;
}

void ApplicationStateManager::changeState()
{
    if (nextStateEnum != STATE_NULL)
    {
        if (nextStateEnum != STATE_EXIT)
        {
            delete currentState;
            currentState = NULL;
        }

        switch (nextStateEnum)
        {
            //case: STATE_MENU:
            //    break;
        }
    }
}

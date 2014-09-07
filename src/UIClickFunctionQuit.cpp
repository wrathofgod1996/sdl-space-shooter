/*******************************************************************//*
 * Implementation of the UIClickFunctionQuit class.
 *
 * @author      Brandon To
 * @version     1.0
 * @since       2014-09-05
 * @modified    2014-09-05
 *********************************************************************/
#include "UIClickFunctionQuit.h"

#include "ApplicationState.h"

UIClickFunctionQuit::UIClickFunctionQuit(ApplicationState* state)
:   state(state)
{

}

void UIClickFunctionQuit::onClick()
{
    state->stateTransition(STATE_EXIT);
}
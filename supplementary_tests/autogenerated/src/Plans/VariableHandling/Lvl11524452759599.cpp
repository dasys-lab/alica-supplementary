#include "Plans/VariableHandling/Lvl11524452759599.h"
using namespace alica;
/*PROTECTED REGION ID(eph1524452759599) ENABLED START*/ // Add additional using directives here
bool vhStartCondition = false;
/*PROTECTED REGION END*/
namespace alicaAutogenerated
{
// Plan:Lvl1

// Check of RuntimeCondition - (Name): NewRuntimeCondition, (ConditionString): , (Comment) :

/*
 * Available Vars:
 *	- L1A (1524453326397)
 *	- L1B (1524453331530)
 */
bool RunTimeCondition1524453470580::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1524453470580) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}

/* generated comment

 Task: DefaultTask  -> EntryPoint-ID: 1524452759601

 */
shared_ptr<UtilityFunction> UtilityFunction1524452759599::getUtilityFunction(Plan* plan)
{
    /*PROTECTED REGION ID(1524452759599) ENABLED START*/

    shared_ptr<UtilityFunction> defaultFunction = make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;

    /*PROTECTED REGION END*/
}

// State: NewState in Plan: Lvl1

// State: NewState in Plan: Lvl1

/*
 *
 * Transition:
 *   - Name: MISSING_NAME, ConditionString: , Comment :
 *
 * Plans in State:
 *
 * Tasks:
 *   - DefaultTask (1225112227903) (Entrypoint: 1524452759601)
 *
 * States:
 *   - NewState (1524452759600)
 *   - NewState (1524453481856)
 *
 * Vars:
 */
bool TransitionCondition1524453491764::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1524453490345) ENABLED START*/
    return vhStartCondition;
    /*PROTECTED REGION END*/
}
} // namespace alicaAutogenerated

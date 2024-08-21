#include <extdll.h>
#include <util.h>
#include <cbase.h>

class FmodSetCVar : public CBaseEntity
{
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value);
};

LINK_ENTITY_TO_CLASS(fmod_setcvar, FmodSetCVar);

void FmodSetCVar::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	ALERT(at_console, "%s=%s\n", STRING(pev->target), STRING(pev->message));
	CVAR_SET_STRING(STRING(pev->target), STRING(pev->message));
}
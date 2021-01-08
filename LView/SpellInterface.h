#pragma once
#include "SpellInfo.h"

/// Used to expose spell information to python
class SpellInterface {

	virtual bool        HasSpellFlags(SpellFlags flags) const = 0;
	virtual bool        EqualSpellFlags(SpellFlags flags) const = 0;
	virtual float       GetSpeed() const = 0;
	virtual float       GetRange() const = 0;
	virtual float       GetRadius() const = 0;
	virtual float       GetRadiusImpact() const = 0;
	virtual float       GetDelay() const = 0;
	virtual float       GetHeight() const = 0;
	virtual std::string GetIcon() const = 0;
};
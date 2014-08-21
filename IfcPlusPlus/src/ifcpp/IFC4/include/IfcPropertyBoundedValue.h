/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPObject.h"
#include "IfcSimpleProperty.h"
class IfcValue;
class IfcUnit;
//ENTITY
class IfcPropertyBoundedValue : public IfcSimpleProperty
{
public:
	IfcPropertyBoundedValue();
	IfcPropertyBoundedValue( int id );
	~IfcPropertyBoundedValue();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkSelf();
	virtual const char* classname() const { return "IfcPropertyBoundedValue"; }


	// IfcPropertyAbstraction -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

	// IfcProperty -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcIdentifier>					m_Name;
	//  shared_ptr<IfcText>							m_Description;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPropertySet> >		m_PartOfPset_inverse;
	//  std::vector<weak_ptr<IfcPropertyDependencyRelationship> >	m_PropertyForDependance_inverse;
	//  std::vector<weak_ptr<IfcPropertyDependencyRelationship> >	m_PropertyDependsOn_inverse;
	//  std::vector<weak_ptr<IfcComplexProperty> >	m_PartOfComplex_inverse;

	// IfcSimpleProperty -----------------------------------------------------------

	// IfcPropertyBoundedValue -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcValue>							m_UpperBoundValue;			//optional
	shared_ptr<IfcValue>							m_LowerBoundValue;			//optional
	shared_ptr<IfcUnit>							m_Unit;						//optional
	shared_ptr<IfcValue>							m_SetPointValue;			//optional
};


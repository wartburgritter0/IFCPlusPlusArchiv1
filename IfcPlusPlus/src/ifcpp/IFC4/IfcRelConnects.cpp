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
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IfcPPEntityEnums.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelConnects.h"
#include "include/IfcText.h"

// ENTITY IfcRelConnects 
IfcRelConnects::IfcRelConnects() {}
IfcRelConnects::IfcRelConnects( int id ) { m_id = id; }
IfcRelConnects::~IfcRelConnects() {}
shared_ptr<IfcPPObject> IfcRelConnects::getDeepCopy()
{
	shared_ptr<IfcRelConnects> copy_self( new IfcRelConnects() );
	if( m_GlobalId ) { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy() ); }
	if( m_OwnerHistory ) { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy() ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy() ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy() ); }
	return copy_self;
}
void IfcRelConnects::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRELCONNECTS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ");";
}
void IfcRelConnects::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcRelConnects::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const int num_args = (int)args.size();
	if( num_args<4 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcRelConnects, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcPPException( strserr.str().c_str() ); }
	#ifdef _DEBUG
	if( num_args>4 ){ std::cout << "Wrong parameter count for entity IfcRelConnects, expecting 4, having " << num_args << ". Object id: " << getId() << std::endl; }
	#endif
	m_GlobalId = IfcGloballyUniqueId::createObjectFromStepData( args[0] );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromStepData( args[2] );
	m_Description = IfcText::createObjectFromStepData( args[3] );
}
void IfcRelConnects::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelationship::getAttributes( vec_attributes );
}
void IfcRelConnects::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelConnects::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelationship::setInverseCounterparts( ptr_self_entity );
}
void IfcRelConnects::unlinkSelf()
{
	IfcRelationship::unlinkSelf();
}

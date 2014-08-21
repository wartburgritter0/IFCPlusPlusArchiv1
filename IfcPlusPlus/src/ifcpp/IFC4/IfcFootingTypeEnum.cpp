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
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPException.h"
#include "include/IfcFootingTypeEnum.h"

// TYPE IfcFootingTypeEnum = ENUMERATION OF	(CAISSON_FOUNDATION	,FOOTING_BEAM	,PAD_FOOTING	,PILE_CAP	,STRIP_FOOTING	,USERDEFINED	,NOTDEFINED);
IfcFootingTypeEnum::IfcFootingTypeEnum() {}
IfcFootingTypeEnum::~IfcFootingTypeEnum() {}
shared_ptr<IfcPPObject> IfcFootingTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcFootingTypeEnum> copy_self( new IfcFootingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFootingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFOOTINGTYPEENUM("; }
	if( m_enum == ENUM_CAISSON_FOUNDATION )
	{
		stream << ".CAISSON_FOUNDATION.";
	}
	else if( m_enum == ENUM_FOOTING_BEAM )
	{
		stream << ".FOOTING_BEAM.";
	}
	else if( m_enum == ENUM_PAD_FOOTING )
	{
		stream << ".PAD_FOOTING.";
	}
	else if( m_enum == ENUM_PILE_CAP )
	{
		stream << ".PILE_CAP.";
	}
	else if( m_enum == ENUM_STRIP_FOOTING )
	{
		stream << ".STRIP_FOOTING.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcFootingTypeEnum> IfcFootingTypeEnum::createObjectFromSTEP( const std::wstring& arg )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFootingTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFootingTypeEnum>(); }
	shared_ptr<IfcFootingTypeEnum> type_object( new IfcFootingTypeEnum() );
	if( boost::iequals( arg, L".CAISSON_FOUNDATION." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_CAISSON_FOUNDATION;
	}
	else if( boost::iequals( arg, L".FOOTING_BEAM." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_FOOTING_BEAM;
	}
	else if( boost::iequals( arg, L".PAD_FOOTING." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_PAD_FOOTING;
	}
	else if( boost::iequals( arg, L".PILE_CAP." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_PILE_CAP;
	}
	else if( boost::iequals( arg, L".STRIP_FOOTING." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_STRIP_FOOTING;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}

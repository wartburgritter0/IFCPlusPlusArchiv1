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
enum IfcPPTypeEnum
{
	IFC_TYPE_UNDEFINED,
	IFCABSORBEDDOSEMEASURE,
	IFCACCELERATIONMEASURE,
	IFCACTIONREQUESTTYPEENUM,
	IFCACTIONSOURCETYPEENUM,
	IFCACTIONTYPEENUM,
	IFCACTORSELECT,
	IFCACTUATORTYPEENUM,
	IFCADDRESSTYPEENUM,
	IFCAIRTERMINALBOXTYPEENUM,
	IFCAIRTERMINALTYPEENUM,
	IFCAIRTOAIRHEATRECOVERYTYPEENUM,
	IFCALARMTYPEENUM,
	IFCAMOUNTOFSUBSTANCEMEASURE,
	IFCANALYSISMODELTYPEENUM,
	IFCANALYSISTHEORYTYPEENUM,
	IFCANGULARVELOCITYMEASURE,
	IFCAPPLIEDVALUESELECT,
	IFCAREADENSITYMEASURE,
	IFCAREAMEASURE,
	IFCARITHMETICOPERATORENUM,
	IFCASSEMBLYPLACEENUM,
	IFCAUDIOVISUALAPPLIANCETYPEENUM,
	IFCAXIS2PLACEMENT,
	IFCBSPLINECURVEFORM,
	IFCBSPLINESURFACEFORM,
	IFCBEAMTYPEENUM,
	IFCBENCHMARKENUM,
	IFCBENDINGPARAMETERSELECT,
	IFCBOILERTYPEENUM,
	IFCBOOLEAN,
	IFCBOOLEANOPERAND,
	IFCBOOLEANOPERATOR,
	IFCBOXALIGNMENT,
	IFCBUILDINGELEMENTPARTTYPEENUM,
	IFCBUILDINGELEMENTPROXYTYPEENUM,
	IFCBUILDINGSYSTEMTYPEENUM,
	IFCBURNERTYPEENUM,
	IFCCABLECARRIERFITTINGTYPEENUM,
	IFCCABLECARRIERSEGMENTTYPEENUM,
	IFCCABLEFITTINGTYPEENUM,
	IFCCABLESEGMENTTYPEENUM,
	IFCCARDINALPOINTREFERENCE,
	IFCCHANGEACTIONENUM,
	IFCCHILLERTYPEENUM,
	IFCCHIMNEYTYPEENUM,
	IFCCLASSIFICATIONREFERENCESELECT,
	IFCCLASSIFICATIONSELECT,
	IFCCOILTYPEENUM,
	IFCCOLOUR,
	IFCCOLOURORFACTOR,
	IFCCOLUMNTYPEENUM,
	IFCCOMMUNICATIONSAPPLIANCETYPEENUM,
	IFCCOMPLEXNUMBER,
	IFCCOMPLEXPROPERTYTEMPLATETYPEENUM,
	IFCCOMPOUNDPLANEANGLEMEASURE,
	IFCCOMPRESSORTYPEENUM,
	IFCCONDENSERTYPEENUM,
	IFCCONNECTIONTYPEENUM,
	IFCCONSTRAINTENUM,
	IFCCONSTRUCTIONEQUIPMENTRESOURCETYPEENUM,
	IFCCONSTRUCTIONMATERIALRESOURCETYPEENUM,
	IFCCONSTRUCTIONPRODUCTRESOURCETYPEENUM,
	IFCCONTEXTDEPENDENTMEASURE,
	IFCCONTROLLERTYPEENUM,
	IFCCOOLEDBEAMTYPEENUM,
	IFCCOOLINGTOWERTYPEENUM,
	IFCCOORDINATEREFERENCESYSTEMSELECT,
	IFCCOSTITEMTYPEENUM,
	IFCCOSTSCHEDULETYPEENUM,
	IFCCOUNTMEASURE,
	IFCCOVERINGTYPEENUM,
	IFCCREWRESOURCETYPEENUM,
	IFCCSGSELECT,
	IFCCURTAINWALLTYPEENUM,
	IFCCURVATUREMEASURE,
	IFCCURVEFONTORSCALEDCURVEFONTSELECT,
	IFCCURVEINTERPOLATIONENUM,
	IFCCURVEONSURFACE,
	IFCCURVEOREDGECURVE,
	IFCCURVESTYLEFONTSELECT,
	IFCDAMPERTYPEENUM,
	IFCDATAORIGINENUM,
	IFCDATE,
	IFCDATETIME,
	IFCDAYINMONTHNUMBER,
	IFCDAYINWEEKNUMBER,
	IFCDEFINITIONSELECT,
	IFCDERIVEDMEASUREVALUE,
	IFCDERIVEDUNITENUM,
	IFCDESCRIPTIVEMEASURE,
	IFCDIMENSIONCOUNT,
	IFCDIRECTIONSENSEENUM,
	IFCDISCRETEACCESSORYTYPEENUM,
	IFCDISTRIBUTIONCHAMBERELEMENTTYPEENUM,
	IFCDISTRIBUTIONPORTTYPEENUM,
	IFCDISTRIBUTIONSYSTEMENUM,
	IFCDOCUMENTCONFIDENTIALITYENUM,
	IFCDOCUMENTSELECT,
	IFCDOCUMENTSTATUSENUM,
	IFCDOORPANELOPERATIONENUM,
	IFCDOORPANELPOSITIONENUM,
	IFCDOORSTYLECONSTRUCTIONENUM,
	IFCDOORSTYLEOPERATIONENUM,
	IFCDOORTYPEENUM,
	IFCDOORTYPEOPERATIONENUM,
	IFCDOSEEQUIVALENTMEASURE,
	IFCDUCTFITTINGTYPEENUM,
	IFCDUCTSEGMENTTYPEENUM,
	IFCDUCTSILENCERTYPEENUM,
	IFCDURATION,
	IFCDYNAMICVISCOSITYMEASURE,
	IFCELECTRICAPPLIANCETYPEENUM,
	IFCELECTRICCAPACITANCEMEASURE,
	IFCELECTRICCHARGEMEASURE,
	IFCELECTRICCONDUCTANCEMEASURE,
	IFCELECTRICCURRENTMEASURE,
	IFCELECTRICDISTRIBUTIONBOARDTYPEENUM,
	IFCELECTRICFLOWSTORAGEDEVICETYPEENUM,
	IFCELECTRICGENERATORTYPEENUM,
	IFCELECTRICMOTORTYPEENUM,
	IFCELECTRICRESISTANCEMEASURE,
	IFCELECTRICTIMECONTROLTYPEENUM,
	IFCELECTRICVOLTAGEMEASURE,
	IFCELEMENTASSEMBLYTYPEENUM,
	IFCELEMENTCOMPOSITIONENUM,
	IFCENERGYMEASURE,
	IFCENGINETYPEENUM,
	IFCEVAPORATIVECOOLERTYPEENUM,
	IFCEVAPORATORTYPEENUM,
	IFCEVENTTRIGGERTYPEENUM,
	IFCEVENTTYPEENUM,
	IFCEXTERNALSPATIALELEMENTTYPEENUM,
	IFCFANTYPEENUM,
	IFCFASTENERTYPEENUM,
	IFCFILLSTYLESELECT,
	IFCFILTERTYPEENUM,
	IFCFIRESUPPRESSIONTERMINALTYPEENUM,
	IFCFLOWDIRECTIONENUM,
	IFCFLOWINSTRUMENTTYPEENUM,
	IFCFLOWMETERTYPEENUM,
	IFCFONTSTYLE,
	IFCFONTVARIANT,
	IFCFONTWEIGHT,
	IFCFOOTINGTYPEENUM,
	IFCFORCEMEASURE,
	IFCFREQUENCYMEASURE,
	IFCFURNITURETYPEENUM,
	IFCGEOGRAPHICELEMENTTYPEENUM,
	IFCGEOMETRICPROJECTIONENUM,
	IFCGEOMETRICSETSELECT,
	IFCGLOBALORLOCALENUM,
	IFCGLOBALLYUNIQUEID,
	IFCGRIDPLACEMENTDIRECTIONSELECT,
	IFCGRIDTYPEENUM,
	IFCHATCHLINEDISTANCESELECT,
	IFCHEATEXCHANGERTYPEENUM,
	IFCHEATFLUXDENSITYMEASURE,
	IFCHEATINGVALUEMEASURE,
	IFCHUMIDIFIERTYPEENUM,
	IFCIDENTIFIER,
	IFCILLUMINANCEMEASURE,
	IFCINDUCTANCEMEASURE,
	IFCINTEGER,
	IFCINTEGERCOUNTRATEMEASURE,
	IFCINTERCEPTORTYPEENUM,
	IFCINTERNALOREXTERNALENUM,
	IFCINVENTORYTYPEENUM,
	IFCIONCONCENTRATIONMEASURE,
	IFCISOTHERMALMOISTURECAPACITYMEASURE,
	IFCJUNCTIONBOXTYPEENUM,
	IFCKINEMATICVISCOSITYMEASURE,
	IFCKNOTTYPE,
	IFCLABEL,
	IFCLABORRESOURCETYPEENUM,
	IFCLAMPTYPEENUM,
	IFCLANGUAGEID,
	IFCLAYERSETDIRECTIONENUM,
	IFCLAYEREDITEM,
	IFCLENGTHMEASURE,
	IFCLIBRARYSELECT,
	IFCLIGHTDISTRIBUTIONCURVEENUM,
	IFCLIGHTDISTRIBUTIONDATASOURCESELECT,
	IFCLIGHTEMISSIONSOURCEENUM,
	IFCLIGHTFIXTURETYPEENUM,
	IFCLINEARFORCEMEASURE,
	IFCLINEARMOMENTMEASURE,
	IFCLINEARSTIFFNESSMEASURE,
	IFCLINEARVELOCITYMEASURE,
	IFCLOADGROUPTYPEENUM,
	IFCLOGICAL,
	IFCLOGICALOPERATORENUM,
	IFCLUMINOUSFLUXMEASURE,
	IFCLUMINOUSINTENSITYDISTRIBUTIONMEASURE,
	IFCLUMINOUSINTENSITYMEASURE,
	IFCMAGNETICFLUXDENSITYMEASURE,
	IFCMAGNETICFLUXMEASURE,
	IFCMASSDENSITYMEASURE,
	IFCMASSFLOWRATEMEASURE,
	IFCMASSMEASURE,
	IFCMASSPERLENGTHMEASURE,
	IFCMATERIALSELECT,
	IFCMEASUREVALUE,
	IFCMECHANICALFASTENERTYPEENUM,
	IFCMEDICALDEVICETYPEENUM,
	IFCMEMBERTYPEENUM,
	IFCMETRICVALUESELECT,
	IFCMODULUSOFELASTICITYMEASURE,
	IFCMODULUSOFLINEARSUBGRADEREACTIONMEASURE,
	IFCMODULUSOFROTATIONALSUBGRADEREACTIONMEASURE,
	IFCMODULUSOFROTATIONALSUBGRADEREACTIONSELECT,
	IFCMODULUSOFSUBGRADEREACTIONMEASURE,
	IFCMODULUSOFSUBGRADEREACTIONSELECT,
	IFCMODULUSOFTRANSLATIONALSUBGRADEREACTIONSELECT,
	IFCMOISTUREDIFFUSIVITYMEASURE,
	IFCMOLECULARWEIGHTMEASURE,
	IFCMOMENTOFINERTIAMEASURE,
	IFCMONETARYMEASURE,
	IFCMONTHINYEARNUMBER,
	IFCMOTORCONNECTIONTYPEENUM,
	IFCNONNEGATIVELENGTHMEASURE,
	IFCNORMALISEDRATIOMEASURE,
	IFCNULLSTYLE,
	IFCNUMERICMEASURE,
	IFCOBJECTREFERENCESELECT,
	IFCOBJECTTYPEENUM,
	IFCOBJECTIVEENUM,
	IFCOCCUPANTTYPEENUM,
	IFCOPENINGELEMENTTYPEENUM,
	IFCOUTLETTYPEENUM,
	IFCPHMEASURE,
	IFCPARAMETERVALUE,
	IFCPERFORMANCEHISTORYTYPEENUM,
	IFCPERMEABLECOVERINGOPERATIONENUM,
	IFCPERMITTYPEENUM,
	IFCPHYSICALORVIRTUALENUM,
	IFCPILECONSTRUCTIONENUM,
	IFCPILETYPEENUM,
	IFCPIPEFITTINGTYPEENUM,
	IFCPIPESEGMENTTYPEENUM,
	IFCPLANARFORCEMEASURE,
	IFCPLANEANGLEMEASURE,
	IFCPLATETYPEENUM,
	IFCPOINTORVERTEXPOINT,
	IFCPOSITIVELENGTHMEASURE,
	IFCPOSITIVEPLANEANGLEMEASURE,
	IFCPOSITIVERATIOMEASURE,
	IFCPOWERMEASURE,
	IFCPRESENTABLETEXT,
	IFCPRESENTATIONSTYLESELECT,
	IFCPRESSUREMEASURE,
	IFCPROCEDURETYPEENUM,
	IFCPROCESSSELECT,
	IFCPRODUCTREPRESENTATIONSELECT,
	IFCPRODUCTSELECT,
	IFCPROFILETYPEENUM,
	IFCPROJECTORDERTYPEENUM,
	IFCPROJECTEDORTRUELENGTHENUM,
	IFCPROJECTIONELEMENTTYPEENUM,
	IFCPROPERTYSETDEFINITIONSELECT,
	IFCPROPERTYSETDEFINITIONSET,
	IFCPROPERTYSETTEMPLATETYPEENUM,
	IFCPROTECTIVEDEVICETRIPPINGUNITTYPEENUM,
	IFCPROTECTIVEDEVICETYPEENUM,
	IFCPUMPTYPEENUM,
	IFCRADIOACTIVITYMEASURE,
	IFCRAILINGTYPEENUM,
	IFCRAMPFLIGHTTYPEENUM,
	IFCRAMPTYPEENUM,
	IFCRATIOMEASURE,
	IFCREAL,
	IFCRECURRENCETYPEENUM,
	IFCREFLECTANCEMETHODENUM,
	IFCREINFORCINGBARROLEENUM,
	IFCREINFORCINGBARSURFACEENUM,
	IFCREINFORCINGBARTYPEENUM,
	IFCREINFORCINGMESHTYPEENUM,
	IFCRESOURCEOBJECTSELECT,
	IFCRESOURCESELECT,
	IFCROLEENUM,
	IFCROOFTYPEENUM,
	IFCROTATIONALFREQUENCYMEASURE,
	IFCROTATIONALMASSMEASURE,
	IFCROTATIONALSTIFFNESSMEASURE,
	IFCROTATIONALSTIFFNESSSELECT,
	IFCSIPREFIX,
	IFCSIUNITNAME,
	IFCSANITARYTERMINALTYPEENUM,
	IFCSECTIONMODULUSMEASURE,
	IFCSECTIONTYPEENUM,
	IFCSECTIONALAREAINTEGRALMEASURE,
	IFCSENSORTYPEENUM,
	IFCSEQUENCEENUM,
	IFCSHADINGDEVICETYPEENUM,
	IFCSHEARMODULUSMEASURE,
	IFCSHELL,
	IFCSIMPLEPROPERTYTEMPLATETYPEENUM,
	IFCSIMPLEVALUE,
	IFCSIZESELECT,
	IFCSLABTYPEENUM,
	IFCSOLARDEVICETYPEENUM,
	IFCSOLIDANGLEMEASURE,
	IFCSOLIDORSHELL,
	IFCSOUNDPOWERLEVELMEASURE,
	IFCSOUNDPOWERMEASURE,
	IFCSOUNDPRESSURELEVELMEASURE,
	IFCSOUNDPRESSUREMEASURE,
	IFCSPACEBOUNDARYSELECT,
	IFCSPACEHEATERTYPEENUM,
	IFCSPACETYPEENUM,
	IFCSPATIALZONETYPEENUM,
	IFCSPECIFICHEATCAPACITYMEASURE,
	IFCSPECULAREXPONENT,
	IFCSPECULARHIGHLIGHTSELECT,
	IFCSPECULARROUGHNESS,
	IFCSTACKTERMINALTYPEENUM,
	IFCSTAIRFLIGHTTYPEENUM,
	IFCSTAIRTYPEENUM,
	IFCSTATEENUM,
	IFCSTRUCTURALACTIVITYASSIGNMENTSELECT,
	IFCSTRUCTURALCURVEACTIVITYTYPEENUM,
	IFCSTRUCTURALCURVEMEMBERTYPEENUM,
	IFCSTRUCTURALSURFACEACTIVITYTYPEENUM,
	IFCSTRUCTURALSURFACEMEMBERTYPEENUM,
	IFCSTYLEASSIGNMENTSELECT,
	IFCSUBCONTRACTRESOURCETYPEENUM,
	IFCSURFACEFEATURETYPEENUM,
	IFCSURFACEORFACESURFACE,
	IFCSURFACESIDE,
	IFCSURFACESTYLEELEMENTSELECT,
	IFCSWITCHINGDEVICETYPEENUM,
	IFCSYSTEMFURNITUREELEMENTTYPEENUM,
	IFCTANKTYPEENUM,
	IFCTASKDURATIONENUM,
	IFCTASKTYPEENUM,
	IFCTEMPERATUREGRADIENTMEASURE,
	IFCTEMPERATURERATEOFCHANGEMEASURE,
	IFCTENDONANCHORTYPEENUM,
	IFCTENDONTYPEENUM,
	IFCTEXT,
	IFCTEXTALIGNMENT,
	IFCTEXTDECORATION,
	IFCTEXTFONTNAME,
	IFCTEXTFONTSELECT,
	IFCTEXTPATH,
	IFCTEXTTRANSFORMATION,
	IFCTHERMALADMITTANCEMEASURE,
	IFCTHERMALCONDUCTIVITYMEASURE,
	IFCTHERMALEXPANSIONCOEFFICIENTMEASURE,
	IFCTHERMALRESISTANCEMEASURE,
	IFCTHERMALTRANSMITTANCEMEASURE,
	IFCTHERMODYNAMICTEMPERATUREMEASURE,
	IFCTIME,
	IFCTIMEMEASURE,
	IFCTIMEORRATIOSELECT,
	IFCTIMESERIESDATATYPEENUM,
	IFCTIMESTAMP,
	IFCTORQUEMEASURE,
	IFCTRANSFORMERTYPEENUM,
	IFCTRANSITIONCODE,
	IFCTRANSLATIONALSTIFFNESSSELECT,
	IFCTRANSPORTELEMENTTYPEENUM,
	IFCTRIMMINGPREFERENCE,
	IFCTRIMMINGSELECT,
	IFCTUBEBUNDLETYPEENUM,
	IFCURIREFERENCE,
	IFCUNIT,
	IFCUNITENUM,
	IFCUNITARYCONTROLELEMENTTYPEENUM,
	IFCUNITARYEQUIPMENTTYPEENUM,
	IFCVALUE,
	IFCVALVETYPEENUM,
	IFCVAPORPERMEABILITYMEASURE,
	IFCVECTORORDIRECTION,
	IFCVIBRATIONISOLATORTYPEENUM,
	IFCVOIDINGFEATURETYPEENUM,
	IFCVOLUMEMEASURE,
	IFCVOLUMETRICFLOWRATEMEASURE,
	IFCWALLTYPEENUM,
	IFCWARPINGCONSTANTMEASURE,
	IFCWARPINGMOMENTMEASURE,
	IFCWARPINGSTIFFNESSSELECT,
	IFCWASTETERMINALTYPEENUM,
	IFCWINDOWPANELOPERATIONENUM,
	IFCWINDOWPANELPOSITIONENUM,
	IFCWINDOWSTYLECONSTRUCTIONENUM,
	IFCWINDOWSTYLEOPERATIONENUM,
	IFCWINDOWTYPEENUM,
	IFCWINDOWTYPEPARTITIONINGENUM,
	IFCWORKCALENDARTYPEENUM,
	IFCWORKPLANTYPEENUM,
	IFCWORKSCHEDULETYPEENUM
};


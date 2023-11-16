

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BatteryReportType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "BatteryReportType.hpp"
#include "BatteryReportTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace EO {

        namespace BatteryStatus {

            // ---- BatteryReportType: 

            BatteryReportType::BatteryReportType() :
                m_chargeRemaining_ (0.0) ,
                m_current_ (0.0) ,
                m_energyUsageRate_ (0.0) ,
                m_hours_ (0.0) ,
                m_state_(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType::FAULT) ,
                m_temp_ (0.0) ,
                m_voltage_ (0.0)  {
                    ::rti::core::fill_array( 
                        m_source_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            BatteryReportType::BatteryReportType (const ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L >& cells,double chargeRemaining,double current,double energyUsageRate,double hours,const UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType& state,double temp,double voltage,const UMAA::Common::Measurement::NumericGUID& source,const UMAA::Common::Measurement::DateTime& timeStamp):
                m_cells_( cells ),
                m_chargeRemaining_( chargeRemaining ),
                m_current_( current ),
                m_energyUsageRate_( energyUsageRate ),
                m_hours_( hours ),
                m_state_( state ),
                m_temp_( temp ),
                m_voltage_( voltage ),
                m_source_( source ),
                m_timeStamp_( timeStamp ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            BatteryReportType::BatteryReportType(BatteryReportType&& other_) OMG_NOEXCEPT  :m_cells_ (std::move(other_.m_cells_))
            ,
            m_chargeRemaining_ (std::move(other_.m_chargeRemaining_))
            ,
            m_current_ (std::move(other_.m_current_))
            ,
            m_energyUsageRate_ (std::move(other_.m_energyUsageRate_))
            ,
            m_hours_ (std::move(other_.m_hours_))
            ,
            m_state_ (std::move(other_.m_state_))
            ,
            m_temp_ (std::move(other_.m_temp_))
            ,
            m_voltage_ (std::move(other_.m_voltage_))
            ,
            m_source_ (std::move(other_.m_source_))
            ,
            m_timeStamp_ (std::move(other_.m_timeStamp_))
            {
            } 

            BatteryReportType& BatteryReportType::operator=(BatteryReportType&&  other_) OMG_NOEXCEPT {
                BatteryReportType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void BatteryReportType::swap(BatteryReportType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_cells_, other_.m_cells_);
                swap(m_chargeRemaining_, other_.m_chargeRemaining_);
                swap(m_current_, other_.m_current_);
                swap(m_energyUsageRate_, other_.m_energyUsageRate_);
                swap(m_hours_, other_.m_hours_);
                swap(m_state_, other_.m_state_);
                swap(m_temp_, other_.m_temp_);
                swap(m_voltage_, other_.m_voltage_);
                swap(m_source_, other_.m_source_);
                swap(m_timeStamp_, other_.m_timeStamp_);
            }  

            bool BatteryReportType::operator == (const BatteryReportType& other_) const {
                if (m_cells_ != other_.m_cells_) {
                    return false;
                }
                if (m_chargeRemaining_ != other_.m_chargeRemaining_) {
                    return false;
                }
                if (m_current_ != other_.m_current_) {
                    return false;
                }
                if (m_energyUsageRate_ != other_.m_energyUsageRate_) {
                    return false;
                }
                if (m_hours_ != other_.m_hours_) {
                    return false;
                }
                if (m_state_ != other_.m_state_) {
                    return false;
                }
                if (m_temp_ != other_.m_temp_) {
                    return false;
                }
                if (m_voltage_ != other_.m_voltage_) {
                    return false;
                }
                if (m_source_ != other_.m_source_) {
                    return false;
                }
                if (m_timeStamp_ != other_.m_timeStamp_) {
                    return false;
                }
                return true;
            }
            bool BatteryReportType::operator != (const BatteryReportType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const BatteryReportType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "cells: " << sample.cells()<<", ";
                o << "chargeRemaining: " << std::setprecision(15) <<sample.chargeRemaining()<<", ";
                o << "current: " << std::setprecision(15) <<sample.current()<<", ";
                o << "energyUsageRate: " << std::setprecision(15) <<sample.energyUsageRate()<<", ";
                o << "hours: " << std::setprecision(15) <<sample.hours()<<", ";
                o << "state: " << sample.state()<<", ";
                o << "temp: " << std::setprecision(15) <<sample.temp()<<", ";
                o << "voltage: " << std::setprecision(15) <<sample.voltage()<<", ";
                o << "source: " << sample.source()<<", ";
                o << "timeStamp: " << sample.timeStamp() ;
                o <<"]";
                return o;
            }

        } // namespace BatteryStatus  

    } // namespace EO  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::EO::BatteryStatus::BatteryReportType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode BatteryReportType_g_tc_cells_sequence;

                static DDS_TypeCode_Member BatteryReportType_g_tc_members[10]=
                {

                    {
                        (char *)"cells",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"chargeRemaining",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"current",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"energyUsageRate",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"hours",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"state",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"temp",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"voltage",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"source",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"timeStamp",/* Member name */
                        {
                            9,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode BatteryReportType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::EO::BatteryStatus::BatteryReportType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        BatteryReportType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for BatteryReportType*/

                if (is_initialized) {
                    return &BatteryReportType_g_tc;
                }

                BatteryReportType_g_tc_cells_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::EO::BatteryStatus::BatteryCellDataType, 100L > >((100L));

                BatteryReportType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                BatteryReportType_g_tc_cells_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::EO::BatteryStatus::BatteryCellDataType>::get().native();
                BatteryReportType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& BatteryReportType_g_tc_cells_sequence;
                BatteryReportType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Energy_Percent_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PowerBusCurrent_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::ElectricalPower_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Duration_Hours_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType>::get().native();
                BatteryReportType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Temperature_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::PowerBusVoltage_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                BatteryReportType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();

                /* Initialize the values for member annotations. */

                BatteryReportType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[1]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[1]._annotations._minValue._u.double_value = 0ULL;
                BatteryReportType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[1]._annotations._maxValue._u.double_value = 1000ULL;

                BatteryReportType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[2]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[2]._annotations._minValue._u.double_value = -100000LL;
                BatteryReportType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[2]._annotations._maxValue._u.double_value = 100000ULL;

                BatteryReportType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[3]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[3]._annotations._minValue._u.double_value = 0ULL;
                BatteryReportType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[3]._annotations._maxValue._u.double_value = 100000000ULL;

                BatteryReportType_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[4]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[4]._annotations._minValue._u.double_value = 0ULL;
                BatteryReportType_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[4]._annotations._maxValue._u.double_value = 10505ULL;

                BatteryReportType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                BatteryReportType_g_tc_members[5]._annotations._defaultValue._u.enumerated_value = 0;

                BatteryReportType_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[6]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[6]._annotations._minValue._u.double_value = -273LL;
                BatteryReportType_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[6]._annotations._maxValue._u.double_value = 1000ULL;

                BatteryReportType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[7]._annotations._defaultValue._u.double_value = 0.0;
                BatteryReportType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[7]._annotations._minValue._u.double_value = -100000LL;
                BatteryReportType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_DOUBLE;
                BatteryReportType_g_tc_members[7]._annotations._maxValue._u.double_value = 100000ULL;

                BatteryReportType_g_tc._data._sampleAccessInfo = sample_access_info();
                BatteryReportType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &BatteryReportType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::EO::BatteryStatus::BatteryReportType *sample;

                static RTIXCdrMemberAccessInfo BatteryReportType_g_memberAccessInfos[10] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo BatteryReportType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &BatteryReportType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::EO::BatteryStatus::BatteryReportType);
                if (sample == NULL) {
                    return NULL;
                }

                BatteryReportType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->cells() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->chargeRemaining() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->current() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->energyUsageRate() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->hours() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->state() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->temp() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->voltage() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->source() - (char *)sample);

                BatteryReportType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->timeStamp() - (char *)sample);

                BatteryReportType_g_sampleAccessInfo.memberAccessInfos = 
                BatteryReportType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::EO::BatteryStatus::BatteryReportType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        BatteryReportType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        BatteryReportType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                BatteryReportType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                BatteryReportType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::EO::BatteryStatus::BatteryReportType >;

                BatteryReportType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &BatteryReportType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin BatteryReportType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &BatteryReportType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::EO::BatteryStatus::BatteryReportType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::EO::BatteryStatus::BatteryReportType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::EO::BatteryStatus::BatteryReportTypePlugin_new,
                UMAA::EO::BatteryStatus::BatteryReportTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::EO::BatteryStatus::BatteryReportType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = BatteryReportTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = BatteryReportTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType >::from_cdr_buffer(UMAA::EO::BatteryStatus::BatteryReportType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = BatteryReportTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::EO::BatteryStatus::BatteryReportType from cdr buffer");
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType >::reset_sample(UMAA::EO::BatteryStatus::BatteryReportType& sample) 
        {
            ::rti::topic::reset_sample(sample.cells());
            sample.chargeRemaining(0.0);
            sample.current(0.0);
            sample.energyUsageRate(0.0);
            sample.hours(0.0);
            sample.state(UMAA::Common::MaritimeEnumeration::PowerPlantStateEnumType::PowerPlantStateEnumType::FAULT);
            sample.temp(0.0);
            sample.voltage(0.0);
            ::rti::topic::reset_sample(sample.source());
            ::rti::topic::reset_sample(sample.timeStamp());
        }

        void topic_type_support< UMAA::EO::BatteryStatus::BatteryReportType >::allocate_sample(UMAA::EO::BatteryStatus::BatteryReportType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.cells(),  100L, -1);
            ::rti::topic::allocate_sample(sample.state(),  -1, -1);
            ::rti::topic::allocate_sample(sample.source(),  -1, -1);
            ::rti::topic::allocate_sample(sample.timeStamp(),  -1, -1);
        }

    }
}  


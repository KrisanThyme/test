#ifndef PHB_DATA_STRUCTS_H_INCLUDED
#define PHB_DATA_STRUCTS_H_INCLUDED

#define DEBUG false

#include "Global.h"

extern char *fileData;

struct sedbphbHeader          // Total Length: 18 * 4 = 72
{
    char id[8];
    uint32_t itype;
    int16_t version;
    int16_t hdrSize;
    int32_t sectSize;
    uint32_t unkA[10];
    uint32_t eOffset;
    int32_t cnt;
    uint32_t unkB;
};

//------------------------//
// Type 2 Data Structures //
//------------------------//

struct type2data
{
    int32_t nameOffset;
    int32_t unkA[4];
    int32_t offset1;
    int32_t count1;
    int32_t name1Offset;
    int32_t zero;
};

struct type2_1data
{
    int32_t offset;
    int32_t nameOffset;
    int32_t zero;
};

struct type2_2data
{
    int32_t volumeType;
    int32_t shapeOffset;
    int32_t jointOffset;
    int32_t unkA;
    float translate[3];
    float fp[3];
    float radius;
    float fp2[4];
};


//------------------------//
// Type 4 Data Structures //
//------------------------//

struct type4data
{
    uint32_t name1Offset;
    uint32_t name2Offset;
    int32_t unkA2;
    int32_t unkA3;
    int32_t unkA4;
    uint32_t offset1;
    int32_t count1;
    uint32_t offset2;
    int32_t count2;
    uint32_t offset3;
    int32_t count3;
    int32_t type3;
    uint32_t offset4;
    int32_t count4;
    int32_t type4;
};

// Common Data Structures

struct type4a__1data
{
    float fp2[3];
    int32_t unkB[2];
};

struct type4a__3data
{
    float fp2[4];
    int32_t unkB[2];
};

struct type4a__5data
{
    float fp2[7];
};

struct type4a__7data
{
    float fp2[2];
    int32_t unkB[3];
};

struct type4a__8data
{
    int32_t unkB;
};

struct type4a__11data
{
    int32_t jointOffset4;
    float fp2[6];
    int32_t unkB;
    int32_t unkC;
};

struct type4a__12data
{
    int32_t jointOffset4;
    float fp2[3];
    int32_t jointOffset5;
    float fp3[5];
    int32_t unkB[2];
};

struct type4a__all
{
    int32_t dataType;
    int32_t jointOffset1;
    int32_t jointOffset2;
    int32_t jointOffset3;
    float fp[6];
};

struct type4a_data
{
    type4a__all common;

    union
    {
        type4a__1data t1;
        type4a__3data t3;
        type4a__5data t5;
        type4a__7data t7;
        type4a__8data t8;
        type4a__11data t11;
        type4a__12data t12;
    };
};

// Type 4.1 //

struct type4_1data
{
    int32_t nameOffset;
    int32_t jointOffset;
    int32_t offset1;
    int32_t count1;
    int32_t offset2;
    int32_t count2;
    float fp[8];
    int32_t offset3;
    int32_t count3;
    int32_t offset4;
};

struct type4_1_1data
{
    int32_t jointOffset1;
    int32_t offset1;
    int32_t count1;
    int32_t offset2;
    int32_t count2;
    float fp[3];
    int32_t unkA;
};

struct type4_1_3data
{
    float fp[3];
    int32_t dataType;
    int16_t unkB[2];
    float fp2;
    int32_t offset1;
    int32_t unkC;
};

struct type4_1_4data
{
    int32_t unkA[10];
};

struct type4_1_1_2data
{
    int32_t nameOffset1;
    int32_t jointOffset1;
    int32_t jointOffset2;
    int32_t dataType;
    float unitVector[3];
    float fp;
};

struct type4_1_3_1data
{
    float rotation[4];
    float unitVector[3];
    int32_t zero;
};


// Type 4.2 //

struct type4_2data
{
};

// Type 4.3 //

struct type4_3__1data
{
    int32_t jointOffset2;
    float fp[2];
    int16_t unkD[2];
};

struct type4_3__2data
{
    int16_t unkC[2];
    float fp[2];
};

struct type4_3__3data
{
    int32_t jointOffset2;
    float fp[5];
};

struct type4_3all
{
    int32_t nameOffset;
    int32_t jointOffset1;
    int32_t dataType;
    int16_t index1;
    int16_t index2;
};

struct type4_3data
{
    type4_3all common;

    union
    {
        type4_3__1data t1;
        type4_3__2data t2;
        type4_3__3data t3;
    };
};

// Type 4.4 //

struct type4_4data
{
    int32_t jointOffset;
    int32_t unkA;
    int32_t offset1;
    int32_t count1;
    int32_t offset2;
    int32_t count2;
    int32_t unkB;
    int32_t offset3;
    int32_t count3;
    float fp[8];
    int32_t offset4;
    int32_t count4;
    int32_t offset5;
    int32_t count5;
    int32_t unkC[7];
};

// Type 4.4.1 //

struct type4_4_1data
{
    int32_t jointOffset;
    int32_t offset1;
    int32_t count1;
    int32_t offset2;
    int32_t count2;
    float fp1[3];
    int32_t unkA;
    float fp2[3];
    int32_t unkB;
    int32_t offset3;
    int32_t unkC[2];
};

struct type4_4_1_2data
{
    int32_t joint1Offset;
    int32_t joint2Offset;
    int32_t joint3Offset;
    int32_t dataType;
    float unitVector[3];
    float fp;
};

struct type4_4_1_3data
{
    float rotation[4];
    float unitVector[3];
    float fp2;
};

// Type 4.4.2 //

struct type4_4_2data
{
    int32_t unkA[2];
    float fp1;
    int32_t unkB[3];
    float fp2;
    int32_t unkC[2];
};

// Type 4.4.4 //

struct type4_4_4data
{
    int16_t unkA;
};

// Type 4.4.5 //

struct type4_4_5data
{
    int32_t dataType;
    float fp[12];
};

//------------------------//
// Type 7 Data Structures //
//------------------------//

struct type7header
{
    int32_t nameOffset;
    int32_t unkA;
    int16_t dataType;
    int16_t unkB;
};

struct type7data
{
    type7header hdr7;
    int32_t unkC[2];
    int32_t offset1;
    int32_t count1;
    int32_t unkD;
};

struct type7_513
{
    int32_t joint1Offset;
    int32_t joint2Offset;
    int32_t joint3Offset;
    float fp[8];
};

struct type7_514
{
    int32_t offset1;
    int32_t count1;
    int32_t joint1Offset;
    int32_t unkC[3];
    float fp[19];
    int32_t joint2Offset;
    int32_t unkD[3];
    float fp2[2];
    int32_t unkE;
    float fp3[3];
    int32_t unkF[2];
    float fp4[2];
};

struct type7_515
{
    int32_t joint1Offset;
    float fp[24];
    int32_t unkC[2];
};

struct type7_516
{
    int32_t offset1;
    int32_t count1;
    int32_t joint1Offset;
    int32_t joint2Offset;
    int32_t unkD[3];
    float fp[7];
    int32_t unkE;
    float fp2[3];
    int32_t unkF;
};

struct type7_517
{
    int32_t joint1Offset;
    float fp[24];
    int32_t unkC[2];
};

struct type7_518
{
    int32_t joint1Offset;
    int32_t joint2Offset;
    int32_t joint3Offset;
    int32_t joint4Offset;
    float fp[12];
    float unitVector[3];
    float fp2[13];
    int32_t unkC;
    float fp3[5];
};

struct type7_521
{
    int32_t joint1Offset;
    int32_t joint2Offset;
    float fp[22];
    int32_t unkC[4];
};

struct type7_522
{
    int32_t joint1Offset;
    float fp;
    int32_t unkC;
    int32_t offset1;
    int32_t count1;
    int32_t unkD[2];
};

struct type7_523
{
    int32_t joint1Offset;
    float fp;
    int32_t offset1;
    int32_t count1;
    int32_t unkC;
};

struct type7_1data
{
    type7header hdr7;

    union
    {
        type7_513 t513;
        type7_514 t514;
        type7_516 t516;
        type7_518 t518;
        type7_521 t521;
        type7_522 t522;
        type7_523 t523;
    };
};

struct type7_1_1data
{
    type7header hdr7;

    union
    {
        type7_515 t515;
        type7_517 t517;
        type7_518 t518;
    };
};

/*************************************************************************************************************/
/*************************************************************************************************************/
/*************************************************************************************************************/

//-------------------//
// Type 2 Structures //
//-------------------//

struct type2_2
{
    const int32_t align = 16;
    int32_t offset;
    int32_t nOffset;
    type2_2data *t2_2data;

    void setOffset(int32_t os)
    {
        if (DEBUG) printf("Type 2.2 Set\n");

        offset = os;
        setMemoryMap("Type 2.2 Data", os, sizeof(type2_2data));
        t2_2data = (type2_2data *) (fileData + os);

        if (t2_2data->volumeType != 1)
            printf("Unknown Shape Type (2.2) %d\n", t2_2data->volumeType);
    }

    int32_t dataSize ( void )
    {
        return sizeof(type2_2data);
    }

    void print ( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 2.2 Print\n");

        globalIndent = indent;
        prti("Shape Type:", t2_2data->volumeType);
        prt("Shape Name:", getAbsString(offset, 4 + t2_2data->shapeOffset));
        prt("Joint Name:", getAbsString(offset, 8 + t2_2data->jointOffset));
        prti("UnkA:", t2_2data->unkA);
        prtf("Translate X:", t2_2data->translate[0]);
        prtf("Translate Y:", t2_2data->translate[1]);
        prtf("Translate Z:", t2_2data->translate[2]);
        prtf("Val 1:", t2_2data->fp[0]);
        prtf("Val 2:", t2_2data->fp[1]);
        prtf("Val 3:", t2_2data->fp[2]);
        prtf("Radius:", t2_2data->radius);

         if (isQuaternion(&t2_2data->fp2[0]))
            printf("Quat 2.2 fp[0] (%d)\n", offset);

        for (i=0; i<4; i++)
        {
            if (i<2)
                if (isUnitVector(&t2_2data->fp2[i]))
                    printf("UVect 2.2 fp[%d] (%d)\n", i, offset);

            sprintf(tStr, "Val %d:", i+3);
            prtf(tStr, t2_2data->fp2[i]);
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t2_2data, dataSize(), align, relOffset);
        nameTracking(nOffset + 4, offset + 4, t2_2data->shapeOffset);
        nameTracking(nOffset + 8, offset + 8, t2_2data->jointOffset);
    }
};


struct type2_1
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type2_1data *t2_1data;
    type2_2 *t2_2;

    void setOffset(int32_t os)
    {
        if (DEBUG) printf("Type 2.1 Set\n");

        offset = os;
        t2_1data = (type2_1data *) (fileData + os);
        setMemoryMap("Type 2.1 Data", os, sizeof(type2_1data));
        t2_2 = new type2_2[1];
        t2_2->setOffset(os + t2_1data->offset);
    }

    int32_t dataSize( void )
    {
        return sizeof(type2_1data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 2.1 Print\n");

        globalIndent = indent;
        prti("Shape Data Ofs:", t2_1data->offset);
        prt("Shape Name:", getAbsString(offset, 4 + t2_1data->nameOffset));
        prtiZero("Zero:", t2_1data->zero);

        t2_2->print(indent + 1);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t2_1data, dataSize(), align, relOffset);
        nameTracking(nOffset + 4, offset + 4, t2_1data->nameOffset);
    }
};

struct type2
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type2data *t2data;
    type2_1 *t2_1;

    void setOffset(int32_t os)
    {
        int32_t i;

        if (DEBUG) printf("Type 2 Set\n");

        offset = os;
        t2data = (type2data *) (fileData + os);
        setMemoryMap("Type 2 Data", os, dataSize());

        if (t2data->count1 > 0)
        {
            t2_1 = new type2_1[t2data->count1];

            for(i=0; i<t2data->count1; i++)
                t2_1[i].setOffset(os + 20 + t2data->offset1 + i * sizeof(type2_1data));
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type2data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 2 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t2data->nameOffset));

        for (i=0; i<4; i++)
        {
            sprintf(tStr, "UnkA(%d):", i);
            prti(tStr, t2data->unkA[i]);
        }

        prti("Offset 1:", t2data->offset1);
        prti("Count 1:", t2data->count1);
        prt("Name 2:", getAbsString(offset, 28 + t2data->name1Offset));
        prtiZero("Zero:", t2data->zero);

        if (t2data->count1 > 0)
        {
            prti0("-- 2.1", t2_1[0].offset);

            for (i=0; i<t2data->count1; i++)
            {
                prti0("-- Instance:", i);
                t2_1[i].print(indent + 1);
            }

            prts("-- 2.1 End");
        }
    }

    void save( int32_t relOffset )
    {
        int32_t i;
        int32_t PHB_Type = 2;

        saveTracking(&PHB_Type, 4, align, relOffset);
        nOffset = saveTracking(t2data, dataSize());
        nameTracking(nOffset, offset, t2data->nameOffset);
        nameTracking(nOffset + 28, offset + 28, t2data->name1Offset);

        if (t2data->count1 > 0)
        {
            for(i=0; i<t2data->count1; i++)
                t2_1[i].save((i==0) ? nOffset + 20 : 0);

            for(i=0; i<t2data->count1; i++)
                t2_1[i].t2_2->save(t2_1[i].nOffset);
        }
    }
};

/*************************************************************************************************************/
/*************************************************************************************************************/
/*************************************************************************************************************/

//-------------------//
// Type 4 Structures //
//-------------------//

struct type4a_std
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4a_data *t4a_data = nullptr;

    void setOffset ( int32_t os )
    {
        if (DEBUG) printf("Type 4a_std Set\n");

        offset = os;
        t4a_data = (type4a_data *) (fileData + os);
        setMemoryMap("Type 4a_std Data", os, dataSize());
    }

    int32_t dataSize( void )
    {
        switch (t4a_data->common.dataType)
        {
            case 1:
                return(sizeof(type4a__all) + sizeof(type4a__1data));
            case 3:
                return(sizeof(type4a__all) + sizeof(type4a__3data));
            case 5:
                return(sizeof(type4a__all) + sizeof(type4a__5data));
            case 7:
                return(sizeof(type4a__all) + sizeof(type4a__7data));
            case 8:
                return(sizeof(type4a__all) + sizeof(type4a__8data));
            case 11:
                return(sizeof(type4a__all) + sizeof(type4a__11data));
            case 12:
                return(sizeof(type4a__all) + sizeof(type4a__12data));
            default:
                printf("Unknown Type in 4a_std: data type %d  (%d)\n", t4a_data->common.dataType, offset);
                return(40);
        }
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4a_std Print (%d)\n", t4a_data->common.dataType);

        globalIndent = indent;
        prti("Type:", t4a_data->common.dataType);
        prt("Name:", getAbsString(offset + 4, t4a_data->common.jointOffset1));
        prt("Joint 1:", getAbsString(offset + 8, t4a_data->common.jointOffset2));
        prt("Joint 2:", getAbsString(offset + 12, t4a_data->common.jointOffset3));

        for (i=0; i<6; i++)
        {
            if (i<4)
                if (isUnitVector(&(t4a_data->common.fp[i])))
                    printf("UVect 4a_std fp[%d] (%d)\n", i, offset);
            if (i<3)
                if (isQuaternion(&(t4a_data->common.fp[i])))
                    printf("Quat 4a_std fp[%d] (%d)\n", i, offset);

            sprintf(tStr, "Val %d", i);
            prtf(tStr, t4a_data->common.fp[i]);
        }

        switch (t4a_data->common.dataType)
        {
            case 1:
                for (i=0; i<3; i++)
                {
                    if (i<4)
                        if (isUnitVector(&(t4a_data->t1.fp2[i])))
                            printf("UVect 4a_std t1 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+6);
                    prtf(tStr, t4a_data->t1.fp2[i]);
                }

                for (i=0; i<2; i++)
                {
                    sprintf(tStr, "UnkB(%d)", i);
                    prti(tStr, t4a_data->t1.unkB[i]);
                }
                break;

            case 3:
                for (i=0; i<4; i++)
                {
                    if (i<2)
                        if (isUnitVector(&(t4a_data->t3.fp2[i])))
                            printf("UVect 4a_std t3 fp2[%d] (%d)\n", i, offset);
                    if (i<1)
                        if (isQuaternion(&(t4a_data->t3.fp2[i])))
                            printf("Quat 4a_std t3 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+6);
                    prtf(tStr, t4a_data->t3.fp2[i]);
                }

                for (i=0; i<2; i++)
                {
                    sprintf(tStr, "UnkB(%d)", i);
                    prti(tStr, t4a_data->t3.unkB[i]);
                }
                break;

            case 5:
                for (i=0; i<7; i++)
                {
                    if (i<5)
                        if (isUnitVector(&(t4a_data->t5.fp2[i])))
                            printf("UVect 4a_std t5 fp2[%d] (%d)\n", i, offset);
                    if (i<4)
                        if (isQuaternion(&(t4a_data->t5.fp2[i])))
                            printf("Quat 4a_std t5 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+6);
                    prtf(tStr, t4a_data->t5.fp2[i]);
                }
                break;

            case 7:
                for (i=4; i<6; i++)
                {
                    if (isUnitVector(&(t4a_data->common.fp[i])))
                        printf("UVect 4a_std t7 fp[%d] (%d)\n", i, offset);
                    if (i<5)
                        if (isQuaternion(&(t4a_data->common.fp[i])))
                            printf("Quat 4a_std t7 fp[%d] (%d)\n", i, offset);
                }

                prtf("Val 6:", t4a_data->t7.fp2[0]);
                prtf("Val 7:", t4a_data->t7.fp2[1]);
                prti("UnkB(0):", t4a_data->t7.unkB[0]);
                prti("UnkB(1):", t4a_data->t7.unkB[1]);
                prti("UnkB(2):", t4a_data->t7.unkB[2]);
                break;

            case 8:
                prti("UnkB", t4a_data->t8.unkB);
                break;

            case 11:
                prt("Joint 2:", getAbsString(offset + 40, t4a_data->t11.jointOffset4));

                for (i=0; i<6; i++)
                {
                    if (i<4)
                        if (isUnitVector(&(t4a_data->t11.fp2[i])))
                            printf("UVect 4a_std t11 fp2[%d] (%d)\n", i, offset);
                    if (i<3)
                        if (isQuaternion(&(t4a_data->t11.fp2[i])))
                            printf("Quat 4a_std t11 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+6);
                    prtf(tStr, t4a_data->t11.fp2[i]);
                }

                prti("UnkB", t4a_data->t11.unkB);
                prti("UnkC", t4a_data->t11.unkC);
                break;

            case 12:
                prt("Name 2:", getAbsString(offset + 40, t4a_data->t12.jointOffset4));

                for (i=0; i<3; i++)
                {
                    if (i<1)
                        if (isUnitVector(&(t4a_data->t12.fp2[i])))
                            printf("UVect 4a_std t12 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+6);
                    prtf(tStr, t4a_data->t12.fp2[i]);
                }

                prt("Joint 2:", getAbsString(offset + 56, t4a_data->t12.jointOffset5));

                for (i=0; i<5; i++)
                {
                    if (i<3)
                        if (isUnitVector(&(t4a_data->t11.fp2[i])))
                            printf("UVect 4a_std t12 fp3[%d] (%d)\n", i, offset);
                    if (i<2)
                        if (isQuaternion(&(t4a_data->t11.fp2[i])))
                            printf("Quat 4a_std t12 fp3[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i+9);
                    prtf(tStr, t4a_data->t12.fp3[i]);
                }

                for (i=0; i<2; i++)
                {
                    sprintf(tStr, "UnkB(%d)", i);
                    prti(tStr, t4a_data->t12.unkB[i]);
                }
                break;
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4a_data, dataSize(), align, relOffset);
        nameTracking(nOffset + 4, offset + 4, t4a_data->common.jointOffset1);
        nameTracking(nOffset + 8, offset + 8, t4a_data->common.jointOffset2);
        nameTracking(nOffset + 12, offset + 12, t4a_data->common.jointOffset3);

        switch (t4a_data->common.dataType)
        {
            case 11:
                nameTracking(nOffset + 40, offset + 40, t4a_data->t11.jointOffset4);
                break;

            case 12:
                nameTracking(nOffset + 40, offset + 40, t4a_data->t12.jointOffset4);
                nameTracking(nOffset + 56, offset + 56, t4a_data->t12.jointOffset5);
                break;
        }
    }
};


struct type4_1_1_2
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_1_1_2data *t4_1_1_2data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.1.1.2 Set\n");

        offset = os;
        t4_1_1_2data = (type4_1_1_2data *) (fileData + os);
        setMemoryMap("Type 4.1.1.2 Data", os, dataSize());
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1_1_2data);
    }

    void print ( int32_t indent )
    {
        if (DEBUG) printf("Type 4.1.1.2 Print\n");

        if (isUnitVector(&t4_1_1_2data->unitVector[0], true) == false)
            printf("4.1.1.2 Err UnitVector\n");

        if (t4_1_1_2data->dataType != 3)
            printf("4.1.1.2 Data Type <> 3\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_1_1_2data->nameOffset1));
        prt("Joint:", getAbsString(offset + 4, t4_1_1_2data->jointOffset1));
        prt("Joint 2:", getAbsString(offset + 8, t4_1_1_2data->jointOffset2));
        prti("Data Type:", t4_1_1_2data->dataType);
        prtf("Vect X:", t4_1_1_2data->unitVector[0]);
        prtf("Vect Y:", t4_1_1_2data->unitVector[1]);
        prtf("Vect Z:", t4_1_1_2data->unitVector[2]);
        prtf("Val 1:", t4_1_1_2data->fp);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_1_1_2data, dataSize(), align, relOffset);
        nameTracking(nOffset, offset, t4_1_1_2data->nameOffset1);
        nameTracking(nOffset + 4, offset + 4, t4_1_1_2data->jointOffset1);
        nameTracking(nOffset + 8, offset + 8, t4_1_1_2data->jointOffset2);
    }
};

struct type4_1_1
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    int32_t *t4_1_1_1Offsets;
    int32_t *t4_1_1_2Offsets;
    type4_1_1data *t4_1_1data = nullptr;
    type4a_std *t4_1_1_1;
    type4_1_1_2 *t4_1_1_2;

    void setOffset( int32_t os )
    {
        int i;

        if (DEBUG) printf("Type 4.1.1 Set\n");

        offset = os;
        t4_1_1data = (type4_1_1data *) (fileData + os);
        setMemoryMap("Type 4.1.1 Data", os, sizeof(type4_1_1data));

        if (t4_1_1data->count1 > 0)
        {
            t4_1_1_1 = new type4a_std[t4_1_1data->count1];
            t4_1_1_1Offsets = (int32_t *) (fileData + os + 4 + t4_1_1data->offset1);
            setMemoryMap("T4.1.1.1 Offsets", os + 4 + t4_1_1data->offset1, sizeof(int32_t) * t4_1_1data->count1);

            for (i=0; i<t4_1_1data->count1; i++)
                t4_1_1_1[i].setOffset(os + 4 + t4_1_1data->offset1 + t4_1_1_1Offsets[i] + i * 4);
        }

        if (t4_1_1data->count2 > 0)
        {
            t4_1_1_2 = new type4_1_1_2[t4_1_1data->count2];
            t4_1_1_2Offsets = (int32_t *) (fileData + os + 12 + t4_1_1data->offset2);
            setMemoryMap("T4.1.1.2 Offsets", os + 12 + t4_1_1data->offset2, sizeof(int32_t) * t4_1_1data->count2);

            for (i=0; i<t4_1_1data->count2; i++)
                t4_1_1_2[i].setOffset(os + 12 + t4_1_1data->offset2 + t4_1_1_2Offsets[i] + i * 4);
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1_1data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.1.1 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_1_1data->jointOffset1));
        prti("Offset 1:", t4_1_1data->offset1);
        prti("Count 1:", t4_1_1data->count1);
        prti("Offset 2:", t4_1_1data->offset2);
        prti("Count 2:", t4_1_1data->count2);

        for (i=0; i<3; i++)
        {
            if (i<1)
                if (isUnitVector(&(t4_1_1data->fp[i])))
                    printf("UVect 4.1.1 fp[%d] (%d)\n", i, offset);

            sprintf(tStr, "Val %d", i);
            prtf(tStr, t4_1_1data->fp[i]);
        }

        prti("UnkA:", t4_1_1data->unkA);

        if (t4_1_1data->count1 > 0)
        {
            prti0("---- 4.1.1.1", fileOffset(t4_1_1_1Offsets));
            prts("---- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_1_1data->count1; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_1_1_1Offsets[i]);
            }

            for (i=0; i<t4_1_1data->count1; i++)
            {
                prti0("---- Instance:", i);
                t4_1_1_1[i].print(indent + 1);
            }

            prts("---- 4.1.1.1 End");
        }

        if (t4_1_1data->count2 > 0)
        {
            prti0("---- 4.1.1.2", fileOffset(t4_1_1_2Offsets));
            prts("---- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_1_1data->count2; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_1_1_2Offsets[i]);
            }

            for (i=0; i<t4_1_1data->count2; i++)
            {
                prti0("---- Instance:", i);
                t4_1_1_2[i].print(indent + 1);
            }

            prts("---- 4.1.1.2 End");
        }
    }

    void save( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;

        nameTracking(nOffset, offset, t4_1_1data->jointOffset1);

        if (t4_1_1data->count1 > 0)
        {
            tOffset = saveTracking(fileData, t4_1_1data->count1 * sizeof(int32_t), 0, nOffset + 4);

            for(i=0; i<t4_1_1data->count1; i++)
                t4_1_1_1[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4_1_1data->count2 > 0)
        {
            tOffset = saveTracking(fileData, t4_1_1data->count2 * sizeof(int32_t), 0, nOffset + 12);

            for(i=0; i<t4_1_1data->count2; i++)
                t4_1_1_2[i].save(tOffset + i * sizeof(int32_t));
        }
    }
};

struct type4_1_3_1
{
    const int32_t align = 16;
    int32_t offset;
    int32_t nOffset;
    type4_1_3_1data *t4_1_3_1data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.1.3.1 Set\n");

        offset = os;
        t4_1_3_1data = (type4_1_3_1data *) (fileData + os);
        setMemoryMap("Type 4.1.3.1 Data", os, sizeof(type4_1_3_1data));
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1_3_1data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 4.1.3.1 Print\n");

        if (isQuaternion(&t4_1_3_1data->rotation[0], offset, false) == false)
            printf("4.1.3.1 Err Quaternion\n");

        if (isUnitVector(&t4_1_3_1data->unitVector[0], true) == false)
            printf("4.1.3.1 Err UnitVector\n");

        globalIndent = indent;
        prtf("Rotate X:", t4_1_3_1data->rotation[0]);
        prtf("Rotate Y:", t4_1_3_1data->rotation[1]);
        prtf("Rotate Z:", t4_1_3_1data->rotation[2]);
        prtf("Rotate W:", t4_1_3_1data->rotation[3]);
        prtf("Vector X:", t4_1_3_1data->unitVector[0]);
        prtf("Vector Y:", t4_1_3_1data->unitVector[1]);
        prtf("Vector Z:", t4_1_3_1data->unitVector[2]);
        prtiZero("Zero:", t4_1_3_1data->zero);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_1_3_1data, dataSize(), align, relOffset);
    }
};

struct type4_1_3
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_1_3data *t4_1_3data = nullptr;
    type4_1_3_1 *t4_1_3_1;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.1.3 Set\n");

        offset = os;
        t4_1_3data = (type4_1_3data *) (fileData + os);
        setMemoryMap("Type 4.1.3 Data", os, sizeof(type4_1_3data));

        if (t4_1_3data->offset1 > 0)
        {
            t4_1_3_1 = new type4_1_3_1[1];
            t4_1_3_1->setOffset(os + 24 + t4_1_3data->offset1);
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1_3data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.1.3 Print\n");

        globalIndent = indent;

        switch (t4_1_3data->dataType)
        {
            case 0:
            case 1:     // Seems to have no offset, and therefore no 4.1.3.1 data
            case 4:
            case 5:
                break;

            default:
                printf("4.1.3 Data Type (%d) <> 0 or 5 (%d)\n", t4_1_3data->dataType, offset);
        }

        for (i=0; i<3; i++)
        {
            sprintf(tStr, "Val %d", i);
            prtf(tStr, t4_1_3data->fp[i]);
        }

        prti("Data Type:", t4_1_3data->dataType);
        prti("UnkB(0)(i16):", t4_1_3data->unkB[0]);
        prti("UnkB(1)(i16):", t4_1_3data->unkB[1]);
        prtf("Val:", t4_1_3data->fp2);
        prti("Offset 1:", t4_1_3data->offset1);
        prti("UnkC:", t4_1_3data->unkC);

        if (t4_1_3data->offset1 > 0)
        {
            prti0("--- 4.1.3.1", t4_1_3_1[0].offset);

            t4_1_3_1[0].print(indent + 1);

            prts("--- 4.1.3.1 End");
        }
    }

    void save( int32_t relOffset )
    {
        if (t4_1_3data->offset1 > 0)
            t4_1_3_1[0].save(nOffset + 24);
    }
};

struct type4_1_4
{
    const int32_t align = 16;
    int32_t offset;
    int32_t nOffset;
    type4_1_4data *t4_1_4data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.1.4 Set\n");

        offset = os;
        t4_1_4data = (type4_1_4data *) (fileData + os);
        setMemoryMap("Type 4.1.4 Data", os, sizeof(type4_1_4data));
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1_4data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.1.4 Print\n");

        globalIndent = indent;

        for (i=0; i<10; i++)
        {
            sprintf(tStr, "UnkA(%d):", i);
            prti(tStr, t4_1_4data->unkA[i]);
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_1_4data, dataSize(), align, relOffset);
    }
};

struct type4_1
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    int32_t *t4_1_2Offsets;
    type4_1data *t4_1data;        // Pointer into the FileData for T4_1 data
    type4_1_1 *t4_1_1;
    type4a_std *t4_1_2;
    type4_1_3 *t4_1_3;
    type4_1_4 *t4_1_4;

    void setOffset( int32_t os )
    {
        int32_t i;

        if (DEBUG) printf("Type 4.1 Set\n");

        offset = os;
        t4_1data = (type4_1data *) (fileData + os);
        setMemoryMap("Type 4.1 Data", os, sizeof(type4_1data));

        if (t4_1data->count1 > 0)
        {
            t4_1_1 = new type4_1_1[t4_1data->count1];

            for (i=0; i<t4_1data->count1; i++)
                t4_1_1[i].setOffset(offset + 8 + t4_1data->offset1 + i * sizeof(type4_1_1data));
        }

        if (t4_1data->count2 > 0)
        {
            t4_1_2 = new type4a_std[t4_1data->count2];
            t4_1_2Offsets = (int32_t *) (fileData + os + 16 + t4_1data->offset2);
            setMemoryMap("T4.1.2 Offsets", os + 16 + t4_1data->offset2, sizeof(int32_t) * t4_1data->count2);

            for (i=0; i<t4_1data->count2; i++)
                t4_1_2[i].setOffset(offset + 16 + t4_1data->offset2 + i * 4 + t4_1_2Offsets[i]);
        }

        if (t4_1data->count3 > 0)
        {
            t4_1_3 = new type4_1_3[t4_1data->count3];

            for (i=0; i<t4_1data->count3; i++)
                t4_1_3[i].setOffset(offset + 56 + t4_1data->offset3 + i * sizeof(type4_1_3data));
        }

        if (t4_1data->offset4 > 0)
        {
            t4_1_4 = new type4_1_4[1];
            t4_1_4[0].setOffset(offset + 64 + t4_1data->offset4);
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_1data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.1 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_1data->nameOffset));
        prt("Joint:", getAbsString(offset + 4, t4_1data->jointOffset));
        prti("Offset 1:", t4_1data->offset1);
        prti("Count 1:", t4_1data->count1);
        prti("Offset 2:", t4_1data->offset2);
        prti("Count 2:", t4_1data->count2);

        for (i=0; i<8; i++)
        {
            sprintf(tStr, "Val %d", i);
            prtf(tStr, t4_1data->fp[i]);
        }

        prti("Offset 3:", t4_1data->offset3);
        prti("Count 3:", t4_1data->count3);
        prti("Offset 4:", t4_1data->offset4);

        if (t4_1data->count1 > 0)
        {
            prti0("--- 4.1.1", t4_1_1[0].offset);

            for (i=0; i<t4_1data->count1; i++)
            {
                prti0("--- Instance:", i);
                t4_1_1[i].print(indent + 1);
            }

           prts("--- 4.1.1 End");
        }

        if (t4_1data->count2 > 0)
        {
            prti0("--- 4.1.2", fileOffset(t4_1_2Offsets));
            prts("--- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_1data->count2; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_1_2Offsets[i]);
            }

            for (i=0; i<t4_1data->count2; i++)
            {
                prti0("--- Instance:", i);
                t4_1_2[i].print(indent + 1);
            }

           prts("--- 4.1.2 End");
        }

        if (t4_1data->count3 > 0)
        {
            prti0("--- 4.1.3", t4_1_3[0].offset);

            for (i=0; i<t4_1data->count3; i++)
            {
                prti0("--- Instance:", i);
                t4_1_3[i].print(indent + 1);
            }

            prts("--- 4.1.3 End");
        }

        if (t4_1data->offset4 > 0)
        {
            prti0("--- 4.1.4", t4_1_4[0].offset);
            prti0("--- Instance:", 0);
            t4_1_4[0].print(indent + 1);
            prts("--- 4.1.4 End");
        }
    }

    void save( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;

        nameTracking(nOffset, offset, t4_1data->nameOffset);
        nameTracking(nOffset + 4, offset + 4, t4_1data->jointOffset);

        if (t4_1data->count1 > 0)
        {
            for(i=0; i<t4_1data->count1; i++)
                t4_1_1[i].nOffset = saveTracking(t4_1_1[i].t4_1_1data, t4_1_1[i].dataSize(), t4_1_1[i].align,
                    (i==0)?nOffset + 8:0);

            for(i=0; i<t4_1data->count1; i++)
                t4_1_1[i].save(0);
        }

        if (t4_1data->count2 > 0)
        {
            tOffset = saveTracking(fileData, t4_1data->count2 * sizeof(int32_t), 0, nOffset + 16);

            for(i=0; i<t4_1data->count2; i++)
                t4_1_2[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4_1data->count3 > 0)
        {
            for(i=0; i<t4_1data->count3; i++)
                t4_1_3[i].nOffset = saveTracking(t4_1_3[i].t4_1_3data, t4_1_3[i].dataSize(), t4_1_3[i].align,
                    (i==0)?nOffset + 56:0);

            for(i=0; i<t4_1data->count3; i++)
                t4_1_3[i].save(0);
        }

        if (t4_1data->offset4 > 0)
            t4_1_4[0].save(nOffset + 64);
    }
};

struct type4_2
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.2 Set\n");

        printf("Type 4.2 found, but not configured.\n");
        offset = os;
    }

    int32_t dataSize( void )
    {
        return (0);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.2 Print\n");

        globalIndent = indent;

        for (i=0; i<20; i++)
        {
            sprintf(tStr, "R4.2 %d:", offset + i * 4);
            prti(tStr, *((int32_t *) (fileData + offset + i * 4)));
        }
    }

    void save( int32_t relOffset )
    {
//        nOffset = saveTracking(t4_2data, dataSize(), align, relOffset);
    }
};

struct type4_3
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_3data *t4_3data;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.3 Set\n");

        offset = os;
        t4_3data = (type4_3data *) (fileData + os);
        setMemoryMap("Type 4.3 Data", os, dataSize());
    }

    int32_t dataSize( void )
    {
        switch (t4_3data->common.dataType)
        {
            case 1:
                return(sizeof(type4_3all) + sizeof(type4_3__1data));
            case 2:
                return(sizeof(type4_3all) + sizeof(type4_3__2data));
            case 3:
                return(sizeof(type4_3all) + sizeof(type4_3__3data));
            default:
                printf("Unknown Type 4 Sub 3 data type %d\n", t4_3data->common.dataType);
                return(32);
        }
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.3 Print (%d)\n", t4_3data->common.dataType);

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_3data->common.nameOffset));
        prt("Joint:", getAbsString(offset + 4, t4_3data->common.jointOffset1));
        prti("Data Type:", t4_3data->common.dataType);
        prti("Index 1?(i16):", t4_3data->common.index1);
        prti("Index 2?(i16):", t4_3data->common.index2);

        switch (t4_3data->common.dataType)
        {
            case 1:
                prt("Joint 2:", getAbsString(offset + 16, t4_3data->t1.jointOffset2));
                prti("Val 1:", t4_3data->t1.fp[0]);
                prtf("Val 2:", t4_3data->t1.fp[1]);
                prti("UnkD(0)(i16):", t4_3data->t1.unkD[0]);
                prti("UnkD(1)(i16):", t4_3data->t1.unkD[1]);
                break;

            case 2:
                prti("UnkC(0)(i16):", t4_3data->t2.unkC[0]);
                prti("UnkC(1)(i16):", t4_3data->t2.unkC[1]);
                prtf("Val 0", t4_3data->t2.fp[0]);
                prtf("Val 1", t4_3data->t2.fp[1]);
                break;

            case 3:
                prt("Joint 2:", getAbsString(offset + 16, t4_3data->t3.jointOffset2));

                for(i=0; i<5; i++)
                {
                    if (i<3)
                        if (isUnitVector(&(t4_3data->t3.fp[i])))
                            printf("UVect 4.3 t3 fp[%d] (%d)\n", i, offset);
                    if (i<2)
                        if (isQuaternion(&(t4_3data->t3.fp[i])))
                            printf("Quat 4.3 t3 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i);
                    prtf(tStr, t4_3data->t3.fp[i]);
                }
                break;
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_3data, dataSize(), align, relOffset);
        nameTracking(nOffset, offset, t4_3data->common.nameOffset);
        nameTracking(nOffset + 4, offset + 4, t4_3data->common.jointOffset1);

        switch (t4_3data->common.dataType)
        {
            case 1:
                nameTracking(nOffset + 16, offset + 16, t4_3data->t1.jointOffset2);
                break;

            case 3:
                nameTracking(nOffset + 16, offset + 16, t4_3data->t3.jointOffset2);
                break;
        }
    }
};

struct type4_4_1_2
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_4_1_2data *t4_4_1_2data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.4.1.2 Set\n");

        offset = os;
        t4_4_1_2data = (type4_4_1_2data *) (fileData + os);
        setMemoryMap("Type 4.4.1.2 Data", os, sizeof(type4_4_1_2data));

        if (t4_4_1_2data->dataType != 3)
            printf("Type 4.4.1.2 Data Type not 3\n");
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4_1_2data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 4.4.1.2 Print\n");

        if (isUnitVector(&t4_4_1_2data->unitVector[0], true) == false)
            printf("4.4.1.2 Err UnitVector\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_4_1_2data->joint1Offset));
        prt("Joint:", getAbsString(offset + 4, t4_4_1_2data->joint2Offset));
        prt("Joint 2:", getAbsString(offset + 8, t4_4_1_2data->joint3Offset));
        prti("Data Type:", t4_4_1_2data->dataType);
        prtf("Vect X:", t4_4_1_2data->unitVector[0]);
        prtf("Vect Y:", t4_4_1_2data->unitVector[1]);
        prtf("Vect Z:", t4_4_1_2data->unitVector[2]);
        prtf("Val 1:", t4_4_1_2data->fp);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_4_1_2data, dataSize(), align, relOffset);
        nameTracking(nOffset, offset, t4_4_1_2data->joint1Offset);
        nameTracking(nOffset + 4, offset + 4, t4_4_1_2data->joint2Offset);
        nameTracking(nOffset + 8, offset + 8, t4_4_1_2data->joint3Offset);
    }
};

struct type4_4_1_3
{
    const int32_t align = 16;
    int32_t offset;
    int32_t nOffset;
    type4_4_1_3data *t4_4_1_3data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.4.1.3 Set\n");

        offset = os;
        t4_4_1_3data = (type4_4_1_3data *) (fileData + os);
        setMemoryMap("Type 4.4.1.3 Data", os, sizeof(type4_4_1_3data));
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4_1_3data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 4.4.1.3 Print\n");

        if (isQuaternion(&t4_4_1_3data->rotation[0], offset, false) == false)
            printf("4.4.1.3 Err Quaternion\n");

        if (isUnitVector(&t4_4_1_3data->unitVector[0], true) == false)
            printf("4.4.1.3 Err UnitVector\n");

        globalIndent = indent;
        prtf("Rotate X:", t4_4_1_3data->rotation[0]);
        prtf("Rotate Y:", t4_4_1_3data->rotation[1]);
        prtf("Rotate Z:", t4_4_1_3data->rotation[2]);
        prtf("Rotate W:", t4_4_1_3data->rotation[3]);
        prtf("Vect X:", t4_4_1_3data->unitVector[0]);
        prtf("Vect Y:", t4_4_1_3data->unitVector[1]);
        prtf("Vect Z:", t4_4_1_3data->unitVector[2]);
        prtf("Val 1:", t4_4_1_3data->fp2);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_4_1_3data, dataSize(), align, relOffset);
    }
};

struct type4_4_1
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    int32_t *t4_4_1_1Offsets;
    int32_t *t4_4_1_2Offsets;
    type4_4_1data *t4_4_1data = nullptr;
    type4a_std *t4_4_1_1;
    type4_4_1_2 *t4_4_1_2;
    type4_4_1_3 *t4_4_1_3;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.4.1 Set\n");

        int32_t i;

        offset = os;
        t4_4_1data = (type4_4_1data *) (fileData + os);
        setMemoryMap("T4.4.1 Data", os, sizeof(type4_4_1data));

        if (t4_4_1data->count1 > 0)
        {
            t4_4_1_1Offsets = (int32_t *) (fileData + os + t4_4_1data->offset1 + 4);
            t4_4_1_1 = new type4a_std[t4_4_1data->count1];
            setMemoryMap("T4.4.1.1 Offsets", os + t4_4_1data->offset1 + 4, sizeof(int32_t) * t4_4_1data->count1);

            for (i=0; i<t4_4_1data->count1; i++)
                t4_4_1_1[i].setOffset(os + t4_4_1data->offset1 + 4 + i * 4 + t4_4_1_1Offsets[i]);
        }

        if (t4_4_1data->count2 > 0)
        {
            t4_4_1_2Offsets = (int32_t *) (fileData + os + t4_4_1data->offset2 + 12);
            t4_4_1_2 = new type4_4_1_2[t4_4_1data->count2];
            setMemoryMap("T4.4.1.2 Offsets", os + t4_4_1data->offset2 + 12, sizeof(int32_t) * t4_4_1data->count2);

            for (i=0; i<t4_4_1data->count2; i++)
                t4_4_1_2[i].setOffset(os + t4_4_1data->offset2 + 12 + i * 4 + t4_4_1_2Offsets[i]);
        }

        if (t4_4_1data->offset3 > 0)
        {
            t4_4_1_3 = new type4_4_1_3[1];
            t4_4_1_3[0].setOffset(os + t4_4_1data->offset3 + 52);
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4_1data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.4.1 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4_4_1data->jointOffset));
        prti("Offset 1:", t4_4_1data->offset1);
        prti("Count 1:", t4_4_1data->count1);
        prti("Offset 2:", t4_4_1data->offset2);
        prti("Count 2:", t4_4_1data->count2);
        prtf("Val 0:", t4_4_1data->fp1[0]);
        prtf("Val 1:", t4_4_1data->fp1[1]);
        prtf("Val 2:", t4_4_1data->fp1[2]);
        prti("UnkA:", t4_4_1data->unkA);
        prtf("Val 3:", t4_4_1data->fp2[0]);
        prtf("Val 4:", t4_4_1data->fp2[1]);
        prtf("Val 5:", t4_4_1data->fp2[2]);
        prti("UnkB:", t4_4_1data->unkB);
        prti("Offset 3:", t4_4_1data->offset3);
        prti("UnkC(0):", t4_4_1data->unkC[0]);
        prti("UnkC(1):", t4_4_1data->unkC[1]);

        if (t4_4_1data->count1 > 0)
        {
            prti0("---- 4.4.1.1", fileOffset(t4_4_1_1Offsets));
            prts("---- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_4_1data->count1; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_4_1_1Offsets[i]);
            }

            for (i=0; i<t4_4_1data->count1; i++)
            {
                prti0("---- Instance:", i);
                t4_4_1_1[i].print(indent + 1);
            }

            prts("---- 4.4.1.1 End");
        }

        if (t4_4_1data->count2 > 0)
        {
            prti0("---- 4.4.1.2", fileOffset(t4_4_1_2Offsets));
            prts("---- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_4_1data->count2; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_4_1_2Offsets[i]);
            }

            for (i=0; i<t4_4_1data->count2; i++)
            {
                prti0("---- Instance:", i);
                t4_4_1_2[i].print(indent + 1);
            }

            prts("---- 4.4.1.2 End");
        }

        if (t4_4_1data->offset3 > 0)
        {
            prti0("---- 4.4.1.3", t4_4_1_3[0].offset);
            prti0("---- Instance:", 0);
            t4_4_1_3[0].print(indent + 1);
            prts("---- 4.4.1.3 End");
        }
    }

    void save( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;

        nameTracking(nOffset, offset, t4_4_1data->jointOffset);

        if (t4_4_1data->count1 > 0)
        {
            tOffset = saveTracking(fileData, t4_4_1data->count1 * sizeof(int32_t), 0, nOffset + 4);

            for(i=0; i<t4_4_1data->count1; i++)
                t4_4_1_1[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4_4_1data->count2 > 0)
        {
            tOffset = saveTracking(fileData, t4_4_1data->count2 * sizeof(int32_t), 0, nOffset + 12);

            for(i=0; i<t4_4_1data->count2; i++)
                t4_4_1_2[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4_4_1data->offset3 > 0)
            t4_4_1_3[0].save(nOffset + 52);
    }
};

struct type4_4_2
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_4_2data *t4_4_2data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.4.2 Set\n");

        offset = os;
        t4_4_2data = (type4_4_2data *) (fileData + os);
        setMemoryMap("T4.4.2 Data", os, sizeof(type4_4_2data));
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4_2data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 4.4.2 Print\n");

        globalIndent = indent;
        prti("UnkA(0):", t4_4_2data->unkA[0]);
        prti("UnkA(1):", t4_4_2data->unkA[1]);
        prtf("Val:", t4_4_2data->fp1);
        prti("UnkB(0):", t4_4_2data->unkB[0]);
        prti("UnkB(1):", t4_4_2data->unkB[1]);
        prti("UnkB(2):", t4_4_2data->unkB[2]);
        prtf("Val:", t4_4_2data->fp2);
        prti("UnkC(0):", t4_4_2data->unkC[0]);
        prti("UnkC(1):", t4_4_2data->unkC[1]);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_4_2data, dataSize(), align, relOffset);
    }
};

struct type4_4_4
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_4_4data *t4_4_4data = nullptr;

    void setOffset( int32_t os )
    {
        if (DEBUG) printf("Type 4.4.4 Set\n");

        offset = os;
        t4_4_4data = (type4_4_4data *) (fileData + os);
        setMemoryMap("T4.4.4 Data", os, sizeof(type4_4_4data));
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4_4data);
    }

    void print( int32_t indent )
    {
        if (DEBUG) printf("Type 4.4.4 Print\n");

        globalIndent = indent;
        prti("UnkA(i16):", t4_4_4data->unkA);
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_4_4data, dataSize(), align, relOffset);
    }
};

struct type4_4_5
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    type4_4_5data *t4_4_5data = nullptr;

    void setOffset (int32_t os)
    {
        if (DEBUG) printf("Type 4.4.5 Set\n");

        offset = os;
        t4_4_5data = (type4_4_5data *) (fileData + os);
        setMemoryMap("T4.4.5 Data", os, sizeof(type4_4_5data));
    }

    int32_t dataSize ( void )
    {
        return sizeof(type4_4_5data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.4.5 Print\n");

        if (t4_4_5data->dataType != 1)
            printf("Unknown data type %d for Type 4.4.5\n", t4_4_5data->dataType);

        globalIndent = indent;
        prti("Data Type:", t4_4_5data->dataType);

        for (i=0; i<12; i++)
        {
            if (i<10)
                if (isUnitVector(&(t4_4_5data->fp[i])))
                    printf("UVect 4.4.5 fp[%d] (%d)\n", i, offset);
            if (i<9)
                if (isQuaternion(&(t4_4_5data->fp[i])))
                    printf("Quat 4.4.5 fp[%d] (%d)\n", i, offset);

            sprintf(tStr, "Val %d:", i);
            prtf(tStr, t4_4_5data->fp[i]);
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t4_4_5data, dataSize(), align, relOffset);
    }
};

struct type4_4
{
    const int32_t align = 1;
    int32_t offset;
    int32_t nOffset;
    int32_t *t4_4_3Offsets;
    type4_4data *t4_4data;
    type4_4_1 *t4_4_1;
    type4_4_2 *t4_4_2;
    type4a_std *t4_4_3;
    type4_4_4 *t4_4_4;
    type4_4_5 *t4_4_5;

    void setOffset( int32_t os )
    {
        int32_t i;

        if (DEBUG) printf("Type 4.4 Set\n");

        offset = os;
        t4_4data = (type4_4data *) (fileData + os);
        setMemoryMap("T4.4 Data", os, sizeof(type4_4data));

        if (t4_4data->count1 > 0)
        {
            t4_4_1 = new type4_4_1[t4_4data->count1];

            for (i=0; i<t4_4data->count1; i++)
                t4_4_1[i].setOffset(offset + t4_4data->offset1 + 8 + i * sizeof(type4_4_1data));
        }

        if (t4_4data->count2 > 0)
        {
            t4_4_2 = new type4_4_2[t4_4data->count2];

            for (i=0; i<t4_4data->count2; i++)
                t4_4_2[i].setOffset(offset + t4_4data->offset2 + 16 + i * sizeof(type4_4_2data));
        }

        if (t4_4data->count3 > 0)
        {
            t4_4_3 = new type4a_std[t4_4data->count3];
            t4_4_3Offsets = (int32_t *) (fileData + offset + t4_4data->offset3 + 28);
            setMemoryMap("T4.4.3 Offsets", offset + t4_4data->offset3 + 28, sizeof(int32_t) * t4_4data->count3);

            for (i=0; i<t4_4data->count3; i++)
                t4_4_3[i].setOffset(offset + t4_4data->offset3 + 28 + i * 4 + t4_4_3Offsets[i]);
        }

        if (t4_4data->count4 > 0)
        {
            t4_4_4 = new type4_4_4[t4_4data->count4];

            for (i=0; i<t4_4data->count4; i++)
                t4_4_4[i].setOffset(offset + t4_4data->offset4 + 68 + i * sizeof(type4_4_4data));
        }

        if (t4_4data->count5 > 0)
        {
            t4_4_5 = new type4_4_5[t4_4data->count5];

            for (i=0; i<t4_4data->count5; i++)
                t4_4_5[i].setOffset(offset + t4_4data->offset5 + 76 + i * sizeof(type4_4_5data));
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type4_4data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4.4 Print\n");

        globalIndent = indent;
        prt("Joint:", getAbsString(offset, t4_4data->jointOffset));
        prti("UnkA:", t4_4data->unkA);
        prti("Offset 1:", t4_4data->offset1);
        prti("Count 1:", t4_4data->count1);
        prti("Offset 2:", t4_4data->offset2);
        prti("Count 2:", t4_4data->count2);
        prti("UnkB:", t4_4data->unkB);
        prti("Offset 3:", t4_4data->offset3);
        prti("Count 3:", t4_4data->count3);

        for (i=0; i<8; i++)
        {
            sprintf(tStr, "Val %d:", i);
            prtf(tStr, t4_4data->fp[i]);
        }

        prti("Offset 4:", t4_4data->offset4);
        prti("Count 4:", t4_4data->count4);
        prti("Offset 5:", t4_4data->offset5);
        prti("Count 5:", t4_4data->count5);

        for (i=0; i<7; i++)
        {
            sprintf(tStr, "UnkC(%d):", i);
            prti(tStr, t4_4data->unkC[i]);
        }

        if (t4_4data->count1 > 0)
        {
            prti0("--- 4.4.1", t4_4_1[0].offset);

            for(i=0; i<t4_4data->count1; i++)
            {
                prti0("--- Instance:", i);
                t4_4_1[i].print(indent + 1);
            }

            prts("--- 4.4.1 End");
        }

        if (t4_4data->count2 > 0)
        {
            prti0("--- 4.4.2", t4_4_2[0].offset);

            for(i=0; i<t4_4data->count2; i++)
            {
                prti0("--- Instance:", i);
                t4_4_2[i].print(indent + 1);
            }

            prts("--- 4.4.2 End");
        }

        if (t4_4data->count3 > 0)
        {
            prti0("--- 4.4.3", fileOffset(t4_4_3Offsets));
            prts("--- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4_4data->count3; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_4_3Offsets[i]);
            }

            for(i=0; i<t4_4data->count3; i++)
            {
                prti0("--- Instance:", i);
                t4_4_3[i].print(indent + 1);
            }

            prts("--- 4.4.3 End");
        }

        if (t4_4data->count4 > 0)
        {
            prti0("--- 4.4.4", t4_4_4[0].offset);

            for(i=0; i<t4_4data->count4; i++)
            {
                prti0("--- Instance:", i);
                t4_4_4[i].print(indent + 1);
            }

            prts("--- 4.4.4 End");
        }

        if (t4_4data->count5 > 0)
        {
            prti0("--- 4.4.5", t4_4_5[0].offset);

            for(i=0; i<t4_4data->count5; i++)
            {
                prti0("--- Instance:", i);
                t4_4_5[i].print(indent + 1);
            }

            prts("--- 4.4.5 End");
        }
    }

    void save( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;

        nameTracking(nOffset, offset, t4_4data->jointOffset);

        if (t4_4data->count1 > 0)
        {
            for (i=0; i<t4_4data->count1; i++)
                t4_4_1[i].nOffset = saveTracking(t4_4_1[i].t4_4_1data, t4_4_1[i].dataSize(), t4_4_1[i].align,
                    (i==0)?nOffset + 8:0);

            for (i=0; i<t4_4data->count1; i++)
                t4_4_1[i].save(0);
        }

        if (t4_4data->count2 > 0)
            for (i=0; i<t4_4data->count2; i++)
                t4_4_2[i].save((i==0)?nOffset + 16:0);

        if (t4_4data->count3 > 0)
        {
            tOffset = saveTracking(fileData, t4_4data->count3 * sizeof(int32_t), 0, nOffset + 28);

            for (i=0; i<t4_4data->count3; i++)
                t4_4_3[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4_4data->count4 > 0)
            for (i=0; i<t4_4data->count4; i++)
                t4_4_4[i].save((i==0)?nOffset + 68:0);

        if (t4_4data->count5 > 0)
            for (i=0; i<t4_4data->count5; i++)
                t4_4_5[i].save((i==0)?nOffset + 76:0);
    }
};

struct type4
{
    const int32_t align = 4;
    int32_t offset;
    int32_t nOffset;
    int32_t *t4_3Offsets;
    type4data *t4data;              // Pointer into the FileData for the T4 data
    type4_1 *t4_1;                  // Array of t4_1 type data
    type4_2 *t4_2;                  // Array of t4_2 type data
    type4_3 *t4_3;                  // Array of t4_3 type data
    type4_4 *t4_4;                  // Array of t4_4 type data

    void setOffset ( int32_t os )
    {
        if (DEBUG) printf("Type 4 Set\n");

        int32_t i;

        offset = os;
        t4data = (type4data *) (fileData + os);
        setMemoryMap("Type 4 Data", os, sizeof(type4data));

        if (t4data->count1 > 0)
        {
            t4_1 = new type4_1[t4data->count1];

            for (i=0; i<t4data->count1; i++)
                t4_1[i].setOffset(offset + t4data->offset1 + 20 + i * sizeof(type4_1data));
        }

        if (t4data->count2 > 0)
        {
            t4_2 = new type4_2[t4data->count2];

            for (i=0; i<t4data->count2; i++)
                t4_2[i].setOffset(offset + t4data->offset2 + 28 + i * sizeof(type4_2data));
        }

        if (t4data->count3 > 0)
        {
            t4_3 = new type4_3[t4data->count3];
            t4_3Offsets = (int32_t *) (fileData + t4data->offset3 + offset + 36);
            setMemoryMap("T4.3 Offsets", t4data->offset3 + offset + 36, sizeof(int32_t) * t4data->count3);

            for (i=0; i<t4data->count3; i++)
                t4_3[i].setOffset(offset + t4data->offset3 + 36 + i * 4 + t4_3Offsets[i]);
        }

        if (t4data->count4 > 0)
        {
            t4_4 = new type4_4[t4data->count4];

            for (i=0; i<t4data->count4; i++)
                t4_4[i].setOffset(offset + t4data->offset4 + 48 + i * sizeof(type4_4data));
        }
    }

    int32_t dataSize ( void )
    {
        return sizeof(type4data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 4 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t4data->name1Offset));
        prt("Name 2:", getAbsString(offset + 4, t4data->name2Offset));
        prti("UnkA 2:", t4data->unkA2);
        prti("(2) Hi bits:", t4data->unkA3);
        prti("UnkA 4:", t4data->unkA4);
        prti("Offset 1:", t4data->offset1);
        prti("Count 1:", t4data->count1);
        prti("Offset 2:", t4data->offset2);
        prti("Count 2:", t4data->count2);
        prti("Offset 3:", t4data->offset3);
        prti("Count 3:", t4data->count3);
        prti("Type 3:", t4data->type3);
        prti("Offset 4:", t4data->offset4);
        prti("Count 4:", t4data->count4);
        prti("Type 4:", t4data->type4);

        if (t4data->count1 > 0)
        {
            prti0("-- 4.1", t4_1[0].offset);

            for (i=0; i < t4data->count1; i++)
            {
                prti0("-- Instance:", i);
                t4_1[i].print(indent + 1);
            }

            prts("-- 4.1 End");
        }

        if (t4data->count2 > 0)
        {
            printf("Type 4.2 Found, not currently defined.\n");
            prti0("-- 4.2", t4_2[0].offset);

            for (i=0; i<t4data->count2; i++)
            {
                prti("-- Instance:", i);
                t4_2[i].print(indent + 1);
            }

            prts("-- 4.2 End");
        }

        if (t4data->count3 > 0)
        {
            prti0("-- 4.3", fileOffset(t4_3Offsets));
            prts("-- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<t4data->count3; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t4_3Offsets[i]);
            }

            for (i=0; i<t4data->count3; i++)
            {
                prti0("-- Instance:", i);
                t4_3[i].print(indent + 1);
            }

            prts("-- 4.3");
        }

        if (t4data->count4 > 0)
        {
            prti0("-- 4.4", t4_4[0].offset);

            for (i=0; i<t4data->count4; i++)
            {
                prti0("-- Instance:", i);
                t4_4[i].print(indent + 1);
            }

            prts("-- 4.4");
        }
    }

    void save ( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;
        int32_t PHB_Type = 4;

        saveTracking(&PHB_Type, 4, align, relOffset);
        nOffset = saveTracking(t4data, dataSize());
        nameTracking(nOffset, offset, t4data->name1Offset);
        nameTracking(nOffset + 4, offset + 4, t4data->name2Offset);

        if (t4data->count1 > 0)
        {
            for (i=0; i<t4data->count1; i++)
                t4_1[i].nOffset = saveTracking(t4_1[i].t4_1data, t4_1[i].dataSize(), t4_1[i].align,
                    (i==0)?nOffset + 20:0);

            for (i=0; i<t4data->count1; i++)
                t4_1[i].save(0);
        }

        if (t4data->count2 > 0)
        {
//            t4_2[0].nOffset = saveTracking(t4_2[0].t4_2data, t4_2[0].dataSize(), t4_2[0].align, nOffset + 36);

            for (i=1; i<t4data->count2; i++)
                t4_2[i].save(0);
        }

        if (t4data->count3 > 0)
        {
            tOffset = saveTracking(fileData, t4data->count3 * sizeof(int32_t), 0, nOffset + 36);

            for (i=0; i<t4data->count3; i++)
                t4_3[i].save(tOffset + i * sizeof(int32_t));
        }

        if (t4data->count4 > 0)
        {
            for (i=0; i<t4data->count4; i++)
                t4_4[i].nOffset = saveTracking(t4_4[i].t4_4data, t4_4[i].dataSize(), t4_4[i].align,
                    (i==0)?nOffset + 48:0);

            for (i=0; i<t4data->count4; i++)
                t4_4[i].save(0);
        }
    }
};

/*************************************************************************************************************/
/*************************************************************************************************************/
/*************************************************************************************************************/

//-------------------//
// Type 7 Structures //
//-------------------//

struct type7_1_1
{
    int32_t offset;
    int32_t nOffset;
    int32_t align = 0;
    type7_1_1data *t7_1_1data;

    void setOffset( int32_t os )
    {
        char tStr[21];

        if (DEBUG) printf("Type 7.1.1 Set\n");

        offset = os;
        t7_1_1data = (type7_1_1data *) (fileData + os);
        sprintf(tStr, "T7.1.1 #%d Data", t7_1_1data->hdr7.dataType);
        setMemoryMap(tStr, os, dataSize());
    }

    int32_t dataSize( void )
    {
        switch (t7_1_1data->hdr7.dataType)
        {
            case 515:
                return(sizeof(type7header) + sizeof(type7_515));
            case 517:
                return(sizeof(type7header) + sizeof(type7_517));
            case 518:
                return(sizeof(type7header) + sizeof(type7_518));
        }

        return(12);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 7.1.1 Print (%d)\n", t7_1_1data->hdr7.dataType);

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t7_1_1data->hdr7.nameOffset));
        prti("UnkA:", t7_1_1data->hdr7.unkA);
        prti("Data Type:", t7_1_1data->hdr7.dataType);
        prti("UnkB(i16):", t7_1_1data->hdr7.unkB);

        switch (t7_1_1data->hdr7.dataType)
        {
            case 515:
            case 517:
                prt("Joint:", getAbsString(offset + 12, t7_1_1data->t515.joint1Offset));

                for (i=0; i<24; i++)
                {
                    if (i<22)
                        if (isUnitVector(&(t7_1_1data->t515.fp[i])))
                            printf("UVect 7.1.1 515 fp[%d] (%d)\n", i, offset);
                    if (i<21)
                        if (isQuaternion(&(t7_1_1data->t515.fp[i])))
                            printf("Quat 7.1.1 515 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d", i);
                    prtf(tStr, t7_1_1data->t515.fp[i]);
                }

                prti("UnkC(0):", t7_1_1data->t515.unkC[0]);
                prti("UnkC(1):", t7_1_1data->t515.unkC[1]);
                break;

            case 518:
                prt("Joint:", getAbsString(offset + 12, t7_1_1data->t518.joint1Offset));
                prt("Joint 2:", getAbsString(offset + 16, t7_1_1data->t518.joint2Offset));
                prt("Joint 3:", getAbsString(offset + 20, t7_1_1data->t518.joint3Offset));
                prt("Joint 4:", getAbsString(offset + 24, t7_1_1data->t518.joint4Offset));

                for (i=0; i<12; i++)
                {
                    if (i<10)
                        if (isUnitVector(&(t7_1_1data->t518.fp[i])))
                            printf("UVect 7.1.1 518 fp[%d] (%d)\n", i, offset);
                    if (i<9)
                        if (isQuaternion(&(t7_1_1data->t518.fp[i])))
                            printf("Quat 7.1.1 518 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1_1data->t518.fp[i]);
                }

                if (isUnitVector(&(t7_1_1data->t518.unitVector[0]), true) == false)
                    printf("7.1.1 518 Err UnitVector\n");

                prtf("Vect X:", t7_1_1data->t518.unitVector[0]);
                prtf("Vect Y:", t7_1_1data->t518.unitVector[1]);
                prtf("Vect Z:", t7_1_1data->t518.unitVector[2]);

                for (i=0; i<13; i++)
                {
                    if (i<11)
                        if (isUnitVector(&(t7_1_1data->t518.fp2[i])))
                            printf("UVect 7.1.1 518 fp2[%d] (%d)\n", i, offset);
                    if (i<10)
                        if (isQuaternion(&(t7_1_1data->t518.fp2[i])))
                            printf("Quat 7.1.1 518 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i + 15);
                    prtf(tStr, t7_1_1data->t518.fp2[i]);
                }

                prti("UnkC:", t7_1_1data->t518.unkC);

                for (i=0; i<5; i++)
                {
                    if (i<3)
                        if (isUnitVector(&(t7_1_1data->t518.fp3[i])))
                            printf("UVect 7.1.1 518 fp3[%d] (%d)\n", i, offset);
                    if (i<2)
                        if (isQuaternion(&(t7_1_1data->t518.fp3[i])))
                            printf("Quat 7.1.1 518 fp3[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i+28);
                    prtf(tStr, t7_1_1data->t518.fp3[i]);
                }

                break;

            default:
                printf("Unknown data type %d for 7.1.1\n", t7_1_1data->hdr7.dataType);
        }
    }

    void save( int32_t relOffset )
    {
        nOffset = saveTracking(t7_1_1data, dataSize(), align, relOffset);
        nameTracking(nOffset, offset, t7_1_1data->hdr7.nameOffset);

        switch (t7_1_1data->hdr7.dataType)
        {
            case 515:
                nameTracking(nOffset + 12, offset + 12, t7_1_1data->t515.joint1Offset);
                break;

            case 517:
                nameTracking(nOffset + 12, offset + 12, t7_1_1data->t517.joint1Offset);
                break;

            case 518:
                nameTracking(nOffset + 12, offset + 12, t7_1_1data->t518.joint1Offset);
                nameTracking(nOffset + 16, offset + 16, t7_1_1data->t518.joint2Offset);
                nameTracking(nOffset + 20, offset + 20, t7_1_1data->t518.joint3Offset);
                nameTracking(nOffset + 24, offset + 24, t7_1_1data->t518.joint4Offset);
                break;
        }
    }
};

struct type7_1
{
    int32_t offset;
    int32_t nOffset;
    int32_t align = 0;
    int32_t *t7_1_1Offsets;
    type7_1data *t7_1data;
    type7_1_1 *t7_1_1;

    void setOffset( int32_t os )
    {
        int32_t i;
        int32_t tCount1 = 0;
        int32_t tOffset1 = 0;
        int32_t tOffset = 0;
        char tStr[21];

        if (DEBUG) printf("Type 7_1 Set\n");

        offset = os;
        t7_1data = (type7_1data *) (fileData + os);

        switch (t7_1data->hdr7.dataType)
        {
            case 514:
                tCount1 = t7_1data->t514.count1;
                tOffset1 = t7_1data->t514.offset1;
                tOffset = 12;
                break;
            case 516:
                tCount1 = t7_1data->t516.count1;
                tOffset1 = t7_1data->t514.offset1;
                tOffset = 12;
                break;
            case 522:
                tOffset1 = t7_1data->t522.offset1;
                tCount1 = t7_1data->t522.count1;
                tOffset = 24;
                break;
            case 523:
                tOffset1 = t7_1data->t523.offset1;
                tCount1 = t7_1data->t523.count1;
                tOffset = 20;
                break;
            case 513:
            case 518:
            case 521:
                break;

            default:
                printf("Type 7.1 unknown data type %d\n", t7_1data->hdr7.dataType);
        };

        sprintf(tStr, "T7.1 #%d Data", t7_1data->hdr7.dataType);
        setMemoryMap(tStr, os, dataSize());

        if (tCount1 > 0)
        {
            t7_1_1 = new type7_1_1[tCount1];
            t7_1_1Offsets = (int32_t *) (fileData + os + tOffset + tOffset1);
            setMemoryMap("T7.1.1 Offsets", os + tOffset + tOffset1, sizeof(int32_t) * tCount1);


            for (i=0; i<tCount1; i++)
                t7_1_1[i].setOffset(os + tOffset + tOffset1 + i * 4 + t7_1_1Offsets[i]);
        }
    }

    int32_t dataSize( void )
    {
        switch (t7_1data->hdr7.dataType)
        {
            case 513:
                return(sizeof(type7header) + sizeof(type7_513));
            case 514:
                return(sizeof(type7header) + sizeof(type7_514));
            case 516:
                return(sizeof(type7header) + sizeof(type7_516));
            case 518:
                return(sizeof(type7header) + sizeof(type7_518));
            case 521:
                return(sizeof(type7header) + sizeof(type7_521));
            case 522:
                return(sizeof(type7header) + sizeof(type7_522));
            case 523:
                return(sizeof(type7header) + sizeof(type7_523));
            default:
                return(sizeof(type7header));
        }
    }

    void print ( int32_t indent )
    {
        int32_t i;
        int32_t tCount1 = 0;
        char tStr[21];

        if (DEBUG) printf("Type 7.1 Print (%d)\n", t7_1data->hdr7.dataType);

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t7_1data->hdr7.nameOffset));
        prti("UnkA:", t7_1data->hdr7.unkA);
        prti("Data Type:", t7_1data->hdr7.dataType);
        prti("UnkB(i16):", t7_1data->hdr7.unkB);

        switch (t7_1data->hdr7.dataType)
        {
            case 513:
                prt("Joint:", getAbsString(offset + 12, t7_1data->t513.joint1Offset));
                prt("Joint 2:", getAbsString(offset + 16, t7_1data->t513.joint2Offset));
                prt("Joint 3:", getAbsString(offset + 20, t7_1data->t513.joint3Offset));

                for (i=0; i<8; i++)
                {
                    if (i<6)
                        if (isUnitVector(&(t7_1data->t513.fp[i])))
                            printf("UVect 7.1 513 fp[%d] (%d)\n", i, offset);
                    if (i<5)
                        if (isQuaternion(&(t7_1data->t513.fp[i])))
                            printf("Quat 7.1 513 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1data->t513.fp[i]);
                }
                break;

            case 514:
                tCount1 = t7_1data->t514.count1;
                prti("Offset 1:", t7_1data->t514.offset1);
                prti("Count 1:", t7_1data->t514.count1);
                prt("Joint:", getAbsString(offset + 20, t7_1data->t514.joint1Offset));

                for (i=0; i<3; i++)
                {
                    sprintf(tStr, "UnkC(%d):", i);
                    prti(tStr, t7_1data->t514.unkC[i]);
                }

                for (i=0; i<19; i++)
                {
                    if (i<17)
                        if (isUnitVector(&(t7_1data->t518.fp[i])))
                            printf("UVect 7.1 514 fp[%d] (%d)\n", i, offset);
                    if (i<16)
                        if (isQuaternion(&(t7_1data->t518.fp[i])))
                            printf("Quat 7.1 514 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1data->t514.fp[i]);
                }

                prt("Joint:", getAbsString(offset + 112, t7_1data->t514.joint2Offset));

                for (i=0; i<3; i++)
                {
                    sprintf(tStr, "UnkD(%d):", i);
                    prti(tStr, t7_1data->t514.unkD[i]);
                }

                if (isUnitVector(&(t7_1data->t514.fp3[0])))
                    printf("UVect 7.1 514 fp3[%d] (%d)\n", 0, offset);

                prtf("Val 19:", t7_1data->t514.fp2[0]);
                prtf("Val 20:", t7_1data->t514.fp2[1]);
                prti("UnkE:", t7_1data->t514.unkE);
                prtf("Val 21:", t7_1data->t514.fp3[0]);
                prtf("Val 22:", t7_1data->t514.fp3[1]);
                prtf("Val 23:", t7_1data->t514.fp3[2]);
                prti("UnkF(0):", t7_1data->t514.unkF[0]);
                prti("UnkF(1):", t7_1data->t514.unkF[1]);
                prtf("Val 24:", t7_1data->t514.fp4[0]);
                prtf("Val 25:", t7_1data->t514.fp4[1]);
                break;

            case 516:
                tCount1 = t7_1data->t516.count1;
                prti("Offset 1:", t7_1data->t516.offset1);
                prti("Jount 1:", t7_1data->t516.count1);
                prt("Joint:", getAbsString(offset + 20, t7_1data->t516.joint1Offset));
                prt("Joint 2:", getAbsString(offset + 24, t7_1data->t516.joint2Offset));

                for (i=0; i<3; i++)
                {
                    sprintf(tStr, "UnkD[%d]:", i);
                    prti(tStr, t7_1data->t516.unkD[i]);
                }

                for (i=0; i<7; i++)
                {
                    if (i<5)
                        if (isUnitVector(&(t7_1data->t516.fp[i])))
                            printf("UVect 7.1 516 fp[%d] (%d)\n", i, offset);
                    if (i<4)
                        if (isQuaternion(&(t7_1data->t516.fp[i])))
                            printf("Quat 7.1 516 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1data->t516.fp[i]);
                }

                if (isUnitVector(&(t7_1data->t516.fp2[0])))
                    printf("UVect 7.1 516 fp2[%d] (%d)\n", 0, offset);

                prti("UnkE:", t7_1data->t516.unkE);
                prtf("Val 7:", t7_1data->t516.fp2[0]);
                prtf("Val 8:", t7_1data->t516.fp2[1]);
                prtf("Val 9:", t7_1data->t516.fp2[2]);
                prti("UnkF:", t7_1data->t516.unkF);
                break;

            case 518:
                prt("Joint:", getAbsString(offset + 12, t7_1data->t518.joint1Offset));
                prt("Joint 2:", getAbsString(offset + 16, t7_1data->t518.joint2Offset));
                prt("Joint 3:", getAbsString(offset + 20, t7_1data->t518.joint3Offset));
                prt("Joint 4:", getAbsString(offset + 24, t7_1data->t518.joint4Offset));

                for (i=0; i<12; i++)
                {
                    if (i<10)
                        if (isUnitVector(&(t7_1data->t518.fp[i])))
                            printf("UVect 7.1 518 fp[%d] (%d)\n", i, offset);
                    if (i<9)
                        if (isQuaternion(&(t7_1data->t518.fp[i])))
                            printf("Quat 7.1 518 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1data->t518.fp[i]);
                }

                if (isUnitVector(&(t7_1data->t518.unitVector[0]), true) == false)
                    printf("7.1 518 Err UnitVector\n");

                prtf("Vect X:", t7_1data->t518.unitVector[0]);
                prtf("Vect Y:", t7_1data->t518.unitVector[1]);
                prtf("Vect Z:", t7_1data->t518.unitVector[2]);

                for (i=0; i<13; i++)
                {
                    if (i<11)
                        if (isUnitVector(&(t7_1data->t518.fp2[i])))
                            printf("UVect 7.1 518 fp2[%d] (%d)\n", i, offset);
                    if (i<10)
                        if (isQuaternion(&(t7_1data->t518.fp2[i])))
                            printf("Quat 7.1 518 fp2[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i + 15);
                    prtf(tStr, t7_1data->t518.fp2[i]);
                }

                prti("UnkC:", t7_1data->t518.unkC);

                for (i=0; i<5; i++)
                {
                    if (i<3)
                        if (isUnitVector(&(t7_1data->t518.fp3[i])))
                            printf("UVect 7.1 518 fp3[%d] (%d)\n", i, offset);
                    if (i<2)
                        if (isQuaternion(&(t7_1data->t518.fp3[i])))
                            printf("Quat 7.1 518 fp3[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i+28);
                    prtf(tStr, t7_1data->t518.fp3[i]);
                }
                break;

            case 521:
                prt("Joint:", getAbsString(offset + 12, t7_1data->t521.joint1Offset));
                prt("Joint:", getAbsString(offset + 16, t7_1data->t521.joint2Offset));

                for (i=0; i<22; i++)
                {
                    if (i<20)
                        if (isUnitVector(&(t7_1data->t521.fp[i])))
                            printf("UVect 7.1 521 fp[%d] (%d)\n", i, offset);
                    if (i<19)
                        if (isQuaternion(&(t7_1data->t521.fp[i])))
                            printf("Quat 7.1 521 fp[%d] (%d)\n", i, offset);

                    sprintf(tStr, "Val %d:", i);
                    prtf(tStr, t7_1data->t521.fp[i]);
                }

                for (i=0; i<4; i++)
                    prti("unkC:", t7_1data->t521.unkC[i]);

                break;

            case 522:
                tCount1 = t7_1data->t522.count1;
                prt("Joint:", getAbsString(offset + 12, t7_1data->t522.joint1Offset));
                prtf("Val 1:", t7_1data->t522.fp);
                prti("unkC:", t7_1data->t522.unkC);
                prti("Offset 1:", t7_1data->t522.offset1);
                prti("Count 1:", t7_1data->t522.count1);
                prti("unkD(0):", t7_1data->t522.unkD[0]);
                prti("unkD(1):", t7_1data->t522.unkD[1]);
                break;

            case 523:
                tCount1 = t7_1data->t523.count1;
                prt("Joint:", getAbsString(offset + 12, t7_1data->t523.joint1Offset));
                prtf("Val 1:", t7_1data->t523.fp);
                prti("Offset 1:", t7_1data->t523.offset1);
                prti("Count 1:", t7_1data->t523.count1);
                prti("unkC:", t7_1data->t523.unkC);
                break;
        }

        if (tCount1 > 0)
        {
            globalIndent = indent + 1;
            prti0("--- 7.1.1", fileOffset(t7_1_1Offsets));
            prts("--- Instance Offsets:");
            globalIndent = indent + 1;

            for (i=0; i<tCount1; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t7_1_1Offsets[i]);
            }

            for (i=0; i<tCount1; i++)
            {
                prti0("--- Instance:", i);
                t7_1_1[i].print(indent + 2);
            }

            prts("--- 7.1.1 End");
        }
    }

    void save ( int32_t relOffset )
    {
        int32_t count1 = 0;
        int32_t tOffset1 = 0;
        int32_t tOffset;
        int32_t i;

        nOffset = saveTracking(t7_1data, dataSize(), align, relOffset);
        nameTracking(nOffset, offset, t7_1data->hdr7.nameOffset);

        switch (t7_1data->hdr7.dataType)
        {
            case 513:
                nameTracking(nOffset + 12, offset + 12, t7_1data->t513.joint1Offset);
                nameTracking(nOffset + 16, offset + 16, t7_1data->t513.joint2Offset);
                nameTracking(nOffset + 20, offset + 20, t7_1data->t513.joint3Offset);
                break;

            case 514:
                count1 = t7_1data->t514.count1;
                tOffset1 = 12;
                nameTracking(nOffset + 20, offset + 20, t7_1data->t514.joint1Offset);
                nameTracking(nOffset + 112, offset + 112, t7_1data->t514.joint2Offset);
                break;

            case 516:
                count1 = t7_1data->t516.count1;
                tOffset1 = 12;
                nameTracking(nOffset + 20, offset + 20, t7_1data->t516.joint1Offset);
                nameTracking(nOffset + 24, offset + 24, t7_1data->t516.joint2Offset);
                break;

            case 518:
                nameTracking(nOffset + 12, offset + 12, t7_1data->t518.joint1Offset);
                nameTracking(nOffset + 16, offset + 16, t7_1data->t518.joint2Offset);
                nameTracking(nOffset + 20, offset + 20, t7_1data->t518.joint3Offset);
                nameTracking(nOffset + 24, offset + 24, t7_1data->t518.joint4Offset);
                break;

            case 521:
                nameTracking(nOffset + 12, offset + 12, t7_1data->t521.joint1Offset);
                nameTracking(nOffset + 16, offset + 16, t7_1data->t521.joint2Offset);
                break;

            case 522:
                count1 = t7_1data->t522.count1;
                tOffset1 = 24;
                nameTracking(nOffset + 12, offset + 12, t7_1data->t522.joint1Offset);
                break;

            case 523:
                count1 = t7_1data->t523.count1;
                tOffset1 = 20;
                nameTracking(nOffset + 12, offset + 12, t7_1data->t523.joint1Offset);
                break;
        }

        if (count1 > 0)
        {
            tOffset = saveTracking(fileData, count1 * sizeof(int32_t), 0, nOffset + tOffset1);

            for (i=0; i<count1; i++)
                t7_1_1[i].save(tOffset + i * sizeof(int32_t));
        }
    }
};

struct type7
{
    const int32_t align = 4;
    int32_t offset;
    int32_t nOffset;
    int32_t *t7_1Offsets;
    type7data *t7data;
    type7_1 *t7_1;

    void setOffset( int32_t os )
    {
        int32_t i;

        if (DEBUG) printf("Type 7 Set\n");

        offset = os;
        t7data = (type7data *) (fileData + os);
        setMemoryMap("Type 7 Data", os, sizeof(type7data));

        if (t7data->count1 > 0)
        {
            t7_1 = new type7_1[t7data->count1];
            t7_1Offsets = (int32_t *) (fileData + os + 20 + t7data->offset1);
            setMemoryMap("T7.1 Offsets", t7data->offset1 + os + 20, sizeof(int32_t) * t7data->count1);

            for (i=0; i<t7data->count1; i++)
                t7_1[i].setOffset(os + 20 + t7data->offset1 + i * 4 + t7_1Offsets[i]);
        }
    }

    int32_t dataSize( void )
    {
        return sizeof(type7data);
    }

    void print( int32_t indent )
    {
        int32_t i;
        char tStr[21];

        if (DEBUG) printf("Type 7 Print\n");

        globalIndent = indent;
        prt("Name:", getAbsString(offset, t7data->hdr7.nameOffset));
        prti("UnkA:", t7data->hdr7.unkA);
        prti("Data Type:", t7data->hdr7.dataType);
        prti("UnkB(i16):", t7data->hdr7.unkB);

        for (i=0; i<2; i++)
        {
            sprintf(tStr, "UnkC(%d):", i);
            prti(tStr, t7data->unkC[i]);
        }

        prti("Offset 1:", t7data->offset1);
        prti("Count 1:", t7data->count1);
        prti("UnkD:", t7data->unkD);

        if (t7data->count1 > 0)
        {
            globalIndent = indent + 1;            prti0("-- 7.1", fileOffset(t7_1Offsets));
            prts("-- Instance Offsets:");
            globalIndent = indent + 2;

            for (i=0; i<t7data->count1; i++)
            {
                sprintf(tStr, "Offset %d:", i);
                prti(tStr, t7_1Offsets[i]);
            }

            for (i=0; i<t7data->count1; i++)
            {
                prti0("-- Instance:", i);
                t7_1[i].print(indent + 1);
            }

            prts("-- 7.1 End");
        }
    }

    void save ( int32_t relOffset )
    {
        int32_t i;
        int32_t tOffset;
        int32_t PHB_Type = 7;

        saveTracking(&PHB_Type, 4, align, relOffset);
        nOffset = saveTracking(t7data, dataSize());
        nameTracking(nOffset, offset, t7data->hdr7.nameOffset);

        if (t7data->count1 > 0)
        {
            tOffset = saveTracking(fileData, t7data->count1 * sizeof(int32_t), 0, nOffset + 20);

            for(i=0; i<t7data->count1; i++)
                t7_1[i].save(tOffset + i * sizeof(int32_t));
        }
    }
};

/*************************************************************************************************************/
/*************************************************************************************************************/
/*************************************************************************************************************/

//--------------//
// Main Entries //
//--------------//

struct phbEntries
{
    int32_t PHB_Type;
    int32_t offset;
    union
    {
        type2 *t2;
        type4 *t4;
        type7 *t7;
    };

    void setOffset( int32_t os )
    {
        offset = os;
        PHB_Type = *((int32_t *) (fileData + os));
        setMemoryMap("Entry PHB_Type", os, 4);

        switch (PHB_Type)
        {
            case 2:
                t2 = new type2;
                t2->setOffset(offset + 4);
                break;

            case 4:
                t4 = new type4;
                t4->setOffset(offset + 4);
                break;

            case 7:
                t7 = new type7;
                t7->setOffset(offset + 4);
                break;

            default:
                printf("Invalid PHB_Type %d\n", PHB_Type);
        }
    }

    int32_t dataSize( void )
    {
        switch (PHB_Type)
        {
            case 2:
                return (sizeof (type2));
            case 4:
                return (sizeof (type4));
            case 7:
                return (sizeof (type7));
        }

        return(0);
    }

    void *data( void )
    {
        return &t2;
    }

    void print( int32_t indent )
    {
        bool tempText = textOnly;

        globalIndent = indent;
        textOnly = false;
        prti("PHB Type:", PHB_Type);
        textOnly = tempText;

        switch (PHB_Type)
        {
            case 2:
                t2->print(indent);
                break;

            case 4:
                t4->print(indent);
                break;

            case 7:
                t7->print(indent);
                break;
        }
    }

    void save ( int32_t relOffset )
    {
        switch (PHB_Type)
        {
            case 2:
                t2->save(relOffset);
                break;

            case 4:
                t4->save(relOffset);
                break;

            case 7:
                t7->save(relOffset);
                break;
        }
    }
};

//-----//
// PHB //
//-----//

struct phbData
{
    sedbphbHeader *header;
    int32_t offset;
    int32_t nOffset;
    int32_t nEntryOffset;
    int32_t entryOffsetStart;
    int32_t *entryOffsets;
    phbEntries *entries;

    void load(void)
    {
        int32_t i;

        header = (sedbphbHeader *) fileData;
        entryOffsets = (int32_t *) (fileData + sizeof(sedbphbHeader));
        entries = new phbEntries[header->cnt];
        setMemoryMap("PHB Header", 0, sizeof(sedbphbHeader));
        setMemoryMap("Entry Offsets", sizeof(sedbphbHeader), sizeof(int32_t) * header->cnt);

        for (i=0; i<header->cnt;i++)
            entries[i].setOffset(i * 4 + entryOffsets[i] + sizeof(sedbphbHeader));
    }

    int32_t dataSize ( void )
    {
        return sizeof(sedbphbHeader);
    }

    void print(int32_t indent)
    {
        int32_t i;
        char description[DESCSIZE + 1];

        if (DEBUG) printf("Type PHB Print\n");

        globalIndent = indent;
        prt("ID:", header->id);
        prti("Type:",header->itype);
        prti("Version:", header->version);
        prti("Hdr Size:", header->hdrSize);
        prti("Sect Size:", header->sectSize);
        for (i=0; i<10; i++)
        {
            sprintf(description, "UnkA(%d):", i);
            prti(description, header->unkA[i]);
        }

        prti("E Offset:", header->eOffset);
        prti("Count:", header->cnt);
        prti("UnkB:", header->unkB);
        prts("- Entry Offsets");
        globalIndent = 2;

        for (i=0; i<header->cnt; i++)
        {
            sprintf(description, "Offset %d:", i);
            prti(description, entryOffsets[i]);
        }

        for (i=0; i<header->cnt; i++)
        {
            prts(blank);
            prti0("- Entry #", i);
            entries[i].print(2);
        }
    }

    void save( void )
    {
        int32_t i;

        header->eOffset = 12;
        nOffset = saveTracking(header, sizeof(sedbphbHeader));
        saveTracking(fileData + sizeof(sedbphbHeader), header->cnt * sizeof(int32_t));

        for (i=0; i<header->cnt; i++)
            entries[i].save(sizeof(sedbphbHeader) + i * sizeof(int32_t));

        updateNames();
    }
};

#endif // PHB_DATA_STRUCTS_H_INCLUDED

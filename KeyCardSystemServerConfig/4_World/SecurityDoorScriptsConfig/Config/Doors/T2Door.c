modded class Land_KlimaX_T2Door 
{
    override string GetCrateClassName()
    {
        return "RedemptionMilitaryCrate";
    }

    override void AddLoot( EntityAI crate )
    {
 
        int i;

        int rndIndex;
		EntityAI obj;
		EntityAI attachment;

        int minWeapons = 2;
        int maxWeapons = 3;
        int minMagAttachments = 3;
        int maxMagAttachments = 5;
        int minOther = 3;
        int maxOther = 7;

        //! Weapons
        int weaponsListCount = KEYCARD_WEAPONS_T2.Count();

        for (i=0; i<Math.RandomInt(minWeapons,maxWeapons); i++) 
        {
            string weaponName = KEYCARD_WEAPONS_T2.Get( Math.RandomInt( 0, weaponsListCount ) );
            crate.GetInventory().CreateInInventory( weaponName );
        }

        //! Mags Attachments
        int magAttachmentsListCount = KEYCARD_ATTACHMENTS_MAGS_T2.Count();

        for (i=0; i<Math.RandomInt(minMagAttachments,maxMagAttachments); i++) 
        {
            string magAttachmentName = KEYCARD_ATTACHMENTS_MAGS_T2.Get( Math.RandomInt( 0, magAttachmentsListCount ) );
            crate.GetInventory().CreateInInventory( magAttachmentName );
        }

        // !Other unique
        int otherItemsT2List = KEYCARD_OTHER_T2.Count();

        for (i=0; i<Math.RandomInt(minOther,maxOther); i++) 
        {
            string otherNameT2 = KEYCARD_OTHER_T2.Get( Math.RandomInt( 0, otherItemsT2List ) );
            crate.GetInventory().CreateInInventory( otherNameT2 );
        }
    }
};
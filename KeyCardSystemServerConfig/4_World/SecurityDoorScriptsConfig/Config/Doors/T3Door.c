
modded class Land_KlimaX_T3Door 
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

        int minWeapons = 1;
        int maxWeapons = 3;
        int minMagAttachments = 2;
        int maxMagAttachments = 4;
        int minVests = 1;
        int maxVests = 3;

        //! Weapons
        int weaponsListCount = KEYCARD_WEAPONS_T3.Count();

        for (i=0; i<Math.RandomInt(minWeapons,maxWeapons); i++) 
        {
            string weaponName = KEYCARD_WEAPONS_T3.Get( Math.RandomInt( 0, weaponsListCount ) );
            crate.GetInventory().CreateInInventory( weaponName );
        }

        //! Mags Attachments
        int magAttachmentsListCount = KEYCARD_ATTACHMENTS_MAGS_T3.Count();

        for (i=0; i<Math.RandomInt(minMagAttachments,maxMagAttachments); i++) 
        {
            string magAttachmentName = KEYCARD_ATTACHMENTS_MAGS_T3.Get( Math.RandomInt( 0, magAttachmentsListCount ) );
            crate.GetInventory().CreateInInventory( magAttachmentName );
        }

        //! Vests
        int vestListCount = KEYCARD_VESTS_T3.Count();

        for (i=0; i<Math.RandomInt(minVests,maxVests); i++) 
        {
            string vestName = KEYCARD_VESTS_T3.Get( Math.RandomInt( 0, vestListCount ) );
            crate.GetInventory().CreateInInventory( vestName );
        }

        //! Other
        int otherItemsList = KEYCARD_OTHER_T3.Count();

        for (i=0; i<otherItemsList; i++) 
        {
            string otherName = KEYCARD_OTHER_T3.Get( i );

            //! 25% chance
            if ( Math.RandomInt(0,4) == 1 ) crate.GetInventory().CreateInInventory( otherName );
        }
    }
};
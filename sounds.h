#ifndef SOUNDS_H
#define SOUNDS_H

#include <QString>

/*!
 * \brief The Sounds class: A class made for selecting
 * from different instrument sounds for the virtual instrument.
 *
 */

class Sounds
{

public:

    /*!
    * \brief Constructor for Sounds class. Simply sets the
    * sound to 1 (Wurlitzer) as default sound when first opened.
    */
    Sounds();

    /*!
     * \brief Based on the value of 'sound' this function
     * assigns all elements of a QString array called 'files'
     * to the appropriate audio sample filenames for the selected instrument sound.
     * \param sound
     */
    void setSound (int sound);

    /*!
     * \brief An QString array to hold the filenames of audio samples for
     * different instrument sounds.
     */
    QString files[61];

};

#endif // SOUNDS_H

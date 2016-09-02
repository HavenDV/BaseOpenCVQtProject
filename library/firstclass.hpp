#pragma once
#include <memory>
#include <opencv2\opencv.hpp>
namespace base
{

    /*! @~russian
    @brief Класс, используемый для хранения и анализа данных с камеры.

    Класс, который отвечает за хранение и обработку данных с камеры.
    */
    class Camera {

    public:

        Camera();

        /*! @~russian
        Возвращает, пуст ли данный объект.
        */
        auto	isEmpty() const -> bool;

    protected:

    };
    typedef std::shared_ptr< Camera > CameraPtr;

}
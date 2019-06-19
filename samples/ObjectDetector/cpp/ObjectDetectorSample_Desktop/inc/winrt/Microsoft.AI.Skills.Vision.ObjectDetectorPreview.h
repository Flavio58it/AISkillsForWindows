﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once

#include "winrt/base.h"


static_assert(winrt::check_version(CPPWINRT_VERSION, "1.0.190111.3"), "Mismatched component and base headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Microsoft.AI.Skills.SkillInterfacePreview.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Microsoft.AI.Skills.Vision.ObjectDetectorPreview.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorBinding<D>::SetInputImageAsync(Windows::Media::VideoFrame const& videoFrame) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding)->SetInputImageAsync(get_abi(videoFrame), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorBinding<D>::DetectedObjects() const
{
    Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding)->get_DetectedObjects(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorResult<D>::Rect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult)->get_Rect(put_abi(value)));
    return value;
}

template <typename D> Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectKind consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorResult<D>::Kind() const
{
    Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectKind value{};
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorResultListDescriptorFactory<D>::CreateInstance(param::hstring const& name, param::hstring const& description, bool isRequired) const
{
    Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory)->CreateInstance(get_abi(name), get_abi(description), isRequired, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> consume_Microsoft_AI_Skills_Vision_ObjectDetectorPreview_IObjectDetectorResultListValue<D>::GetAsVectorView() const
{
    Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListValue)->GetAsVectorView(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding>
{
    int32_t WINRT_CALL SetInputImageAsync(void* videoFrame, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SetInputImageAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), Windows::Media::VideoFrame const);
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetInputImageAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&videoFrame)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DetectedObjects(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DetectedObjects, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult>>(this->shim().DetectedObjects());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorDescription> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorDescription>
{};

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult>
{
    int32_t WINRT_CALL get_Rect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Rect, WINRT_WRAP(Windows::Foundation::Rect));
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Rect());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Kind(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Kind, WINRT_WRAP(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectKind));
            *value = detach_from<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory>
{
    int32_t WINRT_CALL CreateInstance(void* name, void* description, bool isRequired, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateInstance, WINRT_WRAP(Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor), hstring const&, hstring const&, bool);
            *value = detach_from<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&description), isRequired));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListValue> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListValue>
{
    int32_t WINRT_CALL GetAsVectorView(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetAsVectorView, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult>));
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult>>(this->shim().GetAsVectorView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorSkill> : produce_base<D, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorSkill>
{};

}

WINRT_EXPORT namespace winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview {

inline ObjectDetectorDescriptor::ObjectDetectorDescriptor() :
    ObjectDetectorDescriptor(impl::call_factory<ObjectDetectorDescriptor>([](auto&& f) { return f.template ActivateInstance<ObjectDetectorDescriptor>(); }))
{}

inline ObjectDetectorResultListDescriptor::ObjectDetectorResultListDescriptor(param::hstring const& name, param::hstring const& description, bool isRequired) :
    ObjectDetectorResultListDescriptor(impl::call_factory<ObjectDetectorResultListDescriptor, Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory>([&](auto&& f) { return f.CreateInstance(name, description, isRequired); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorBinding> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorDescription> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorDescription> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResult> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListDescriptorFactory> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListValue> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorResultListValue> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorSkill> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::IObjectDetectorSkill> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorBinding> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorBinding> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorDescriptor> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorDescriptor> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResult> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListDescriptor> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListValue> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorResultListValue> {};
template<> struct hash<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorSkill> : winrt::impl::hash_base<winrt::Microsoft::AI::Skills::Vision::ObjectDetectorPreview::ObjectDetectorSkill> {};

}
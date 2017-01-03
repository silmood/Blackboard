defmodule Blackboard.RoomChannel do
  use Phoenix.Channel
  require Logger

  def join("rooms:blackboard", _params, socket)do
    {:ok, socket}
  end

  def handle_info(_params, socket)do
    {:noreply, socket}
  end
end
